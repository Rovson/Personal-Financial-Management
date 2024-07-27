# Personal-Financial-Management

## Description

The Personal Financial Management System is a C++ project designed to help users manage and track their financial activities. It leverages object-oriented programming principles to handle various aspects of financial management, such as annotations, daily logs, and financial records. The system is structured to provide a clean and efficient way to maintain financial information, ensuring data integrity and ease of use.

## Project Structure

```
FinancialManagement/
│
├── anotacion/
│   ├── anotacion.cpp
│   ├── anotacion.h
│
├── dia/
│   ├── dia.cpp
│   ├── dia.h
│
├── dietario/
│   ├── dietario.cpp
│   ├── dietario.h
│
├── documentacion.pdf
├── fecha/
│   ├── fecha.cpp
│   ├── fecha.h
│
├── main.cpp
├── menu/
│   ├── menu.cpp
│   ├── menu.h
│
├── Proyecto1.pro
├── Proyecto1.pro.user
├── Proyecto1_es_ES.ts
├── README.md
└── .gitignore
```

## Objectives

- Implement a financial management system using C++.
- Apply object-oriented programming principles to manage financial data.
- Ensure data integrity and provide a user-friendly interface for managing financial records.

## Tools and Technologies

- **Classes and Objects**: Defined various classes to manage different aspects of the financial system.
- **Constructors and Destructors**: Proper memory management for dynamic data.
- **Operator Overloading**: Implemented for intuitive data operations.
- **Dynamic Memory**: Managed using pointers and dynamic allocation.

## Detailed Description

### anotacion

Contains the implementation for managing annotations related to financial entries:

- **Attributes**: Stores information about financial annotations.
- **Methods**: Methods for creating, editing, and displaying annotations.

### dia

Contains the implementation for managing daily financial logs:

- **Attributes**: Stores daily financial entries.
- **Methods**: Methods for adding, editing, and displaying daily logs.

### dietario

Contains the implementation for the overall financial management system:

- **Attributes**: Combines daily logs and annotations.
- **Methods**: Methods for managing the entire financial system.

### fecha

Contains the implementation for handling date-related data:

- **Attributes**: Stores and manages date information.
- **Methods**: Methods for date validation and manipulation.

### menu

Contains the implementation for the user interface menu:

- **Attributes**: Stores menu options and commands.
- **Methods**: Methods for displaying and handling menu interactions.

### main.cpp

- The main entry point for the project. It initializes the financial management system and handles user interactions.

## Documentation

Refer to the `documentacion.pdf` for detailed insights into the project, including:

- **Introduction and Objectives**
- **Detailed Class Descriptions**
- **Code Examples and Explanations**
- **Testing and Validation Procedures**
- **Use Cases and Applications**

## Compilation and Execution

To compile and run the project, ensure you have a compatible C++ compiler installed. Use the following commands:

```bash
# Navigate to the project directory
cd FinancialManagement

# Compile the main file along with other source files
g++ main.cpp anotacion/anotacion.cpp dia/dia.cpp dietario/dietario.cpp fecha/fecha.cpp menu/menu.cpp -o FinancialManagement

# Run the executable
./FinancialManagement
```

## Usage

1. **Initialization**: Initialize the financial management system.
2. **Menu Navigation**: Use the menu to add, edit, and display financial entries and annotations.
3. **Data Management**: Ensure data is correctly entered and managed for accurate financial tracking.

## Testing

Various test cases are provided in the documentation and within the source files to validate the functionality of the financial management system. These include:

- **Unit Tests**: For individual class methods and operations.
- **Integration Tests**: For overall functionality and combined operations.
- **Edge Cases**: Handling special scenarios and inputs.

## Contributing

If you want to contribute to the project, please follow these steps:

1. **Fork the Repository**: Create a fork of the repository on GitHub.
2. **Clone the Repository**: Clone the forked repository to your local machine.
3. **Create a Branch**: Create a new branch for your feature or bugfix.
4. **Make Changes**: Implement your changes and improvements.
5. **Test**: Thoroughly test your changes.
6. **Commit and Push**: Commit your changes and push to your forked repository.
7. **Submit a Pull Request**: Create a pull request to the original repository.

## License

This project is licensed under the MIT License. See the `LICENSE` file for details.
