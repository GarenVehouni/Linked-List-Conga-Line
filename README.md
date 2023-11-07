# Linked-List-Conga-Line
# Circular Conga Line Linked List

![Conga Line](conga.jpg)

This C++ program implements a circular linked list to represent a conga line and perform various functions on the list. The program allows you to add dancers to the end of the conga line, add a dancer to the front of the line, search for a specific dancer, remove a dancer, and sort the conga line dancers alphabetically.

## Table of Contents

- [Introduction](#circular-conga-line-linked-list)
- [Table of Contents](#table-of-contents)
- [Prerequisites](#prerequisites)
- [Usage](#usage)
- [Implementation Details](#implementation-details)
- [Contributors](#contributors)
- [License](#license)

## Prerequisites

Before you can run this program, make sure you have the following:

- A C++ compiler (e.g., g++)
- C++ development environment

## Usage

To use this program, follow these steps:

1. Clone the repository:

   ```bash
   git clone https://github.com/your-username/conga-line-linked-list.git
   ```

2. Compile the program:

   ```bash
   g++ main.cpp linkedList.cpp -o conga
   ```

3. Run the program:

   ```bash
   ./conga
   ```

4. Follow the on-screen instructions to interact with the conga line.

## Implementation Details

The project consists of the following files:

- `main.cpp`: Contains the main program, including the `main` function, where you can create dancers, add them to the conga line, and perform various operations.

- `linkedList.h`: Header file that defines the `Node` and `linkedList` classes, which are used to create the circular linked list and perform various operations.

- `linkedList.cpp`: Contains the implementation of the methods defined in the `linkedList` class.

### `Node` Class

The `Node` class represents a node in the circular linked list. It contains a string `data` property and a `next` pointer to the next node in the list.

### `linkedList` Class

The `linkedList` class is responsible for managing the conga line. It includes the following methods:

- `linkedList()`: Constructor for creating an empty linked list.

- `appendIntoConga(Node* node)`: Adds a dancer to the end of the conga line.

- `prependIntoConga(Node* node)`: Adds a dancer to the front of the conga line.

- `print(Node* head)`: Traverses and prints the conga line.

- `searchForDancer(Node* head, string valueToSearch)`: Searches for a specific dancer in the conga line.

- `removeDancer(Node* head, string dancer)`: Removes a dancer from the conga line.

- `sortAlphabetically(Node* head)`: Sorts the conga line dancers in alphabetical order.

## Contributors

- [Garen Vehouni](https://github.com/garen-vehouni)

## License

This project is licensed under the [MIT License](LICENSE). You are free to use, modify, and distribute the code as needed.
