from abc import ABC, abstractmethod
from dataclasses import dataclass, field
from typing import List

# Abstract Base Class for Products
class Product(ABC):
    def __init__(self, name: str, price: float, category: str):
        self.name = name
        self.price = price
        self.category = category

    @abstractmethod
    def get_info(self) -> str:
        pass

    def apply_discount(self, discount: float):
        self.price -= self.price * discount / 100

# Product Subclasses
class Electronics(Product):
    def __init__(self, name: str, price: float, warranty_period: int):
        super().__init__(name, price, "Electronics")
        self.warranty_period = warranty_period

    def get_info(self) -> str:
        return f"Electronics: {self.name}, Price: ${self.price:.2f}, Warranty: {self.warranty_period} months"

class Clothing(Product):
    def __init__(self, name: str, price: float, size: str, material: str):
        super().__init__(name, price, "Clothing")
        self.size = size
        self.material = material

    def get_info(self) -> str:
        return f"Clothing: {self.name}, Price: ${self.price:.2f}, Size: {self.size}, Material: {self.material}"

class Books(Product):
    def __init__(self, name: str, price: float, author: str, isbn: str):
        super().__init__(name, price, "Books")
        self.author = author
        self.isbn = isbn

    def get_info(self) -> str:
        return f"Book: {self.name}, Price: ${self.price:.2f}, Author: {self.author}, ISBN: {self.isbn}"

# ShoppingCart Class
@dataclass
class ShoppingCart:
    products: List[Product] = field(default_factory=list)

    def add_product(self, product: Product):
        self.products.append(product)
        print(f"Added {product.name} to the cart.")

    def remove_product(self, product: Product):
        if product in self.products:
            self.products.remove(product)
            print(f"Removed {product.name} from the cart.")
        else:
            print(f"{product.name} is not in the cart.")

    def total_cost(self) -> float:
        return sum(product.price for product in self.products)

    def display_cart(self):
        if not self.products:
            print("Your cart is empty.")
        else:
            for product in self.products:
                print(product.get_info())
            print(f"Total Cost: ${self.total_cost():.2f}")

    def clear_cart(self):
        self.products.clear()
        print("Cart has been cleared.")

# User Class
@dataclass
class User:
    name: str
    email: str
    shopping_cart: ShoppingCart = field(default_factory=ShoppingCart)

    def add_to_cart(self, product: Product):
        self.shopping_cart.add_product(product)

    def remove_from_cart(self, product: Product):
        self.shopping_cart.remove_product(product)

    def checkout(self):
        print(f"User {self.name} is checking out...")
        self.shopping_cart.display_cart()
        self.shopping_cart.clear_cart()

# User Interface
def display_products(products: List[Product]):
    print("\nAvailable Products:")
    for idx, product in enumerate(products, start=1):
        print(f"{idx}. {product.get_info()}")

def main():
    # Create some products
    laptop = Electronics(name="Laptop", price=999.99, warranty_period=24)
    tshirt = Clothing(name="T-Shirt", price=19.99, size="L", material="Cotton")
    book = Books(name="Python Programming", price=39.99, author="John Doe", isbn="1234567890")

    products = [laptop, tshirt, book]

    # Create a user
    user = User(name="Alice", email="alice@example.com")

    while True:
        print("\nMenu:")
        print("1. Browse Products")
        print("2. Add Product to Cart")
        print("3. Remove Product from Cart")
        print("4. View Cart")
        print("5. Checkout")
        print("6. Exit")

        choice = input("Choose an option: ")

        if choice == '1':
            display_products(products)
        elif choice == '2':
            display_products(products)
            prod_choice = int(input("Enter the product number to add to the cart: ")) - 1
            if 0 <= prod_choice < len(products):
                user.add_to_cart(products[prod_choice])
            else:
                print("Invalid choice.")
        elif choice == '3':
            user.shopping_cart.display_cart()
            prod_choice = int(input("Enter the product number to remove from the cart: ")) - 1
            if 0 <= prod_choice < len(user.shopping_cart.products):
                user.remove_from_cart(user.shopping_cart.products[prod_choice])
            else:
                print("Invalid choice.")
        elif choice == '4':
            user.shopping_cart.display_cart()
        elif choice == '5':
            user.checkout()
        elif choice == '6':
            print("Exiting the Online Shopping System. Goodbye!")
            break
        else:
            print("Invalid choice, please try again.")

        input("\nPress Enter to continue...")  # Wait for the user to press Enter before continuing

if __name__ == "__main__":
    main()
