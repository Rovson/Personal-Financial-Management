# Personal-Financial-Management

## Description

The Personal-Financial-Management Application is a C++ program designed to keep a detailed record of personal income and expenses. It leverages advanced Object-Oriented Programming (OOP) concepts to model financial entries and provides an intuitive user interface to manage the diary efficiently.

## Project Structure

```
DietManagement/
├── src/
│   ├── anotacion.cpp
│   ├── anotacion.h
│   ├── dia.cpp
│   ├── dia.h
│   ├── dietario.cpp
│   ├── dietario.h
│   ├── fecha.cpp
│   ├── fecha.h
│   ├── main.cpp
│   ├── menu.cpp
│   └── menu.h
├── doc/
│   └── documentation.pdf
├── Proyecto1.pro
├── Proyecto1.pro.user
├── Proyecto1_es_ES.ts
├── .gitignore
└── README.md
```

- **`src/`**: Contains the project's source files.
  - `anotacion.cpp` and `anotacion.h`: Define the `Anotacion` class to handle individual diary entries.
  - `dia.cpp` and `dia.h`: Define the `Dia` class which groups entries by date.
  - `dietario.cpp` and `dietario.h`: Implement the `Dietario` class, managing the collection of days with their entries.
  - `fecha.cpp` and `fecha.h`: Include the `Fecha` class to handle the dates of the entries.
  - `main.cpp`: Contains the main function of the program.
  - `menu.cpp` and `menu.h`: Implement the `Menu` class, providing an interface for user interaction.
- **`doc/`**: Contains the project documentation.
  - `documentation.pdf`: PDF file with the complete project documentation.
- **`Proyecto1.pro`**: Project file for the development environment.
- **`Proyecto1.pro.user`**: User-specific project file.
- **`Proyecto1_es_ES.ts`**: Translation file.
- **`.gitignore`**: Specifies files and directories for Git to ignore.
- **`README.md`**: This file, containing project documentation.

## Requirements

- **C++ Compiler** compatible with C++11 or later.
- **Qt Framework** (optional, if using Qt Creator).

## Compilation and Execution

1. **Clone the repository:**

   ```bash
   git clone https://github.com/your-username/diet-management.git
   cd diet-management
   ```

2. **Compile the project:**

   If you are using an environment like Qt Creator, simply open the `Proyecto1.pro` file and build the project. Alternatively, you can compile it manually using `g++`:

   ```bash
   g++ src/*.cpp -o diet_management
   ```

3. **Run the program:**

   ```bash
   ./diet_management
   ```

## Usage

Once the program is running, an interactive menu will be displayed with the following options:

1. **Add Entry:** Allows you to add a new entry to the diary.
2. **Show Diary:** Displays all the entries recorded so far.
3. **Delete Diary:** Deletes all entries from the diary.
4. **Exit:** Terminates the program.

## Main Classes

- **`Anotacion`**: Represents an individual entry with a concept and amount.
- **`Dia`**: Groups entries under a specific date.
- **`Dietario`**: Manages the collection of days with their entries.
- **`Fecha`**: Handles the dates of the entries.
- **`Menu`**: Provides the user interface for interacting with the diary.

## Documentation

The complete project documentation can be found in the [documentation.pdf](doc/documentation.pdf) file.

## Contributing

Contributions are welcome. Please fork the repository, make your changes, and submit a pull request with a detailed description of your modifications.

## License

This project is licensed under the MIT License. See the `LICENSE` file for details.
