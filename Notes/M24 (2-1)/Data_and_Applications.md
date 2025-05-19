1. **Database**: A collection of related data that represents some aspect of the real world (also called a "mini-world"). For example, university student grades.
2. **Data**: Recorded facts with implicit meaning.
3. **Database Management System (DBMS)**: A software system that helps create and manage a computerized database.
4. **Database System**: Includes both the DBMS software and the data. Sometimes, the applications that access the data are also part of this system.
5. **Views**: Different users may need specific views of the data, which can be subsets or virtual representations derived from the actual data.
6. **Transactions**: Actions that involve accessing, reading, or updating database records. Transactions follow **ACID properties**:
	1. **Atomicity**: Either all parts of a transaction are executed or none.
	2. **Consistency**: Data must follow defined rules.
	3. **Isolation**: Transactions appear isolated, even if many are executed simultaneously.
	4. **Durability**: Committed transactions remain intact even after a system failure.
7. **Database Roles**:
	1. **Database Administrators**: Manage access, security, and performance.
	2. **Database Designers**: Define the structure of the database, working with users to create appropriate views.
	3. **End Users**: Individuals who interact with the database, ranging from occasional (casual) users to those constantly using it (naïve/parametric users).
	4. **System Analysts & Programmers**: Develop programs based on user requirements.
	5. **DBMS Designers**: Design the DBMS’s core modules.
	6. **Tool Developers**: Create optional tools for modeling, design, and performance.
	7. **Operators & Maintenance Staff**: Maintain the system hardware and software.
8. **Database Functions**:
	1. **Controlling Redundancy**: Avoid storing the same data multiple times to save space and maintain consistency.
	2. **Restricting Unauthorized Access**: Limit access to sensitive data (e.g., grades, salaries).
	3. **Efficient Query Processing**: Ensure quick execution of data retrieval and updates.
	4. **Backup & Recovery**: Provide mechanisms to recover from system failures.
	5. **Multiple User Interfaces**: Support various interfaces (e.g., apps, query languages) to cater to different types of users.
	6. **Representing Complex Relationships**: Handle and retrieve related data efficiently, maintaining referential integrity and uniqueness constraints.
	7. **Rules and Triggers**: Automate certain operations in response to data updates (e.g., triggers or stored procedures).

**NOSQL**
NoSQL databases are non-relational databases designed for handling large, unstructured, or semi-structured data. They offer flexible data models like document-based, key-value, column-family, or graph-based storage. Key features include horizontal scalability, schema flexibility, and high performance for large-scale, real-time applications. NoSQL is ideal for handling big data and distributed systems.

**When Not to Use a DBMS**:

1. **Main Inhibitors** (Costs):
    
    - High initial investment, including potential hardware upgrades.
    - Overhead from features like security, concurrency control, recovery, and integrity.
2. **When a DBMS May Be Unnecessary**:
    
    - If the database and applications are simple, stable, and unlikely to change.
    - If multiple-user access is not required.
3. **When a DBMS May Be Infeasible**:
    
    - In embedded systems with limited storage, where a general-purpose DBMS may not fit.


- **Data Models**:
    
    - **Definition**: A framework used to describe the structure of a database, its operations, and constraints.
    - **Structure & Constraints**: Defines elements (e.g., tables, entities) and their relationships, along with rules that must be followed.
- **Data Model Operations**:
    
    - Operations specify database retrievals and updates, including basic (insert, delete) and user-defined operations.
- **Categories of Data Models**:
    
    - **Conceptual**: High-level, close to user perception (e.g., entity-based models).
    - **Physical**: Low-level, focusing on how data is stored.
    - **Implementation**: In-between, used in systems like relational databases.
    - **Self-Describing**: Data models that store data along with its description (e.g., XML, NoSQL).
- **Schemas vs. Instances**:
    
    - **Schema**: The description or structure of the database (e.g., STUDENT table).
    - **Instance**: The actual data in the database at a given time (a snapshot).
    - The **schema** rarely changes, while the **database state** changes with updates.
- **Three-Schema Architecture**:
    
    - **Internal Schema**: Physical storage and access paths.
    - **Conceptual Schema**: Overall structure and constraints for users.
    - **External Schemas**: Different user views, often based on the conceptual schema.
- **DBMS Languages**:
    
    - **DDL (Data Definition Language)**: Defines schemas (internal, conceptual, external).
    - **DML (Data Manipulation Language)**: Used for data retrieval and updates.
- **Types of DML**:
    
    - **High-Level/Non-procedural**: Set-based, declarative (e.g., SQL), specifies what data to retrieve.
    - **Low-Level/Procedural**: Retrieves data record-by-record using loops (e.g., COBOL).


- **DBMS Interfaces**:
    
    - **Stand-alone Query Interfaces**: SQL interfaces like SQL*Plus in Oracle.
    - **Programmer Interfaces**: DML embedded in languages (e.g., embedded SQL in C, JDBC for Java).
    - **User-Friendly Interfaces**: Menu-based, forms-based, graphics-based, and mobile interfaces.
    - **Other Interfaces**: Natural language, speech input, and parametric interfaces (e.g., bank tellers).
- **DBMS Programming Language Interfaces**:
    
    - **Embedded Approach**: SQL embedded in C, Java.
    - **Procedure Call Approach**: JDBC for Java, ODBC for other languages.
    - **Database Programming Languages**: PL/SQL in Oracle integrates SQL with programming.
    - **Scripting Languages**: PHP (client-side) and Python (server-side).
- **DBMS Utilities**:
    
    - Tools for loading data, backing up, reorganizing files, performance monitoring, and report generation.
- **Centralized and Client-Server DBMS Architectures**:
    
    - **Centralized DBMS**: All components in one system; remote access possible.
    - **Clients**: Provide interfaces to access server resources via a network.
    - **DBMS Server**: Manages queries and transactions, often through SQL servers.
- **Two-Tier Client-Server Architecture**:
    
    - Clients interact with DBMS servers via APIs like ODBC and JDBC.
- **Three-Tier Client-Server Architecture**:
    
    - **Application/Web Server**: Middle tier between client and database, enhancing security.
- **Relational Model Concepts**:
    
    - **Relation**: A table of values, where rows (tuples) represent entities, and columns (attributes) define data elements.
    - **Key**: A unique identifier for each row (e.g., SSN in STUDENT table).
    - The relational model was formalized by Dr. E.F. Codd in 1970, revolutionizing data management.


Here’s a brief explanation of **ER**, **EER**, and **UML**, along with their differences:

1. **ER (Entity-Relationship Model)**:
    
    - **Purpose**: Used to model the structure of a database at a conceptual level.
    - **Key Concepts**: Entities (real-world objects), relationships (associations between entities), and attributes (properties of entities).
    - **Usage**: Widely used for designing relational databases.
    - **Diagram**: ER diagrams represent entities as rectangles, relationships as diamonds, and attributes as ovals.
2. **EER (Enhanced Entity-Relationship Model)**:
    
    - **Purpose**: An extension of the ER model to include more complex data relationships.
    - **Key Concepts**: In addition to basic ER features, it adds specialization, generalization, and inheritance.
    - **Usage**: Suitable for advanced database applications with complex hierarchies.
    - **Diagram**: EER diagrams expand on ER diagrams by introducing additional notations for superclasses/subclasses and constraints.
3. **UML (Unified Modeling Language)**:
    
    - **Purpose**: A general-purpose modeling language used for designing software systems, including databases.
    - **Key Concepts**: Uses classes, objects, associations, and inheritance, similar to object-oriented programming.
    - **Usage**: Broadly used in software engineering for system design, not limited to databases.
    - **Diagram**: UML class diagrams resemble ER diagrams but emphasize object-oriented concepts like methods and class inheritance.

### **Key Differences**:

- **Scope**: ER and EER are database-focused, while UML is more comprehensive and can model entire software systems.
- **Complexity**: EER includes advanced features (like inheritance) that basic ER lacks, while UML is designed for more detailed system modeling.
- **Usage**: ER/EER are mainly used in database design, whereas UML is applied in broader software design, including both structure and behavior.
### **Schema**:

- The **schema** of a relation, denoted as **R(A1, A2, ..., An)**, describes the structure of the relation.
- **R** is the name of the relation, and **A1, A2, ..., An** are its attributes.
- Example: `CUSTOMER(Cust-id, Cust-name, Address, Phone#)` where `CUSTOMER` is the relation, and `Cust-id`, `Cust-name`, `Address`, and `Phone#` are attributes. Each attribute has an associated domain (set of valid values).

### **Tuple**:

- A **tuple** is an ordered set of values corresponding to the attributes of a relation.
- Each value is derived from a specific domain.
- Example: A tuple from the `CUSTOMER` relation might look like `<632895, "John Smith", "101 Main St. Atlanta, GA", "(404) 894-2000">`.

### **Domain**:

- A **domain** defines the possible values that an attribute can take.
- It has a logical definition (e.g., "USA_phone_numbers") and a data-type or format (e.g., `(ddd) ddd-dddd`).
- Example: The domain of `Cust-id` may be 6-digit numbers, while the domain of `Cust-name` could be a string of up to 25 characters.

### **State**:

- The **state** of a relation is a specific set of tuples that exist at a given point in time.
- It is a subset of the Cartesian product of the domains of the relation’s attributes.
- Example: The relation state for `R(A1, A2)` with `dom(A1) = {0,1}` and `dom(A2) = {a,b,c}` could be `r(R) = {<0,a>, <0,b>, <1,c>}`.

### **Summary**:

- **Schema (R(A1, A2, ..., An))**: Defines the structure of a relation.
- **r(R)**: The current **state** of the relation, a set of tuples from the Cartesian product of the domains of the attributes.
- **Tuple**: A specific row in the relation.
- **Domain**: The set of valid values for each attribute.

Example:

- Let **R(A1, A2)** have domains `dom(A1) = {0,1}` and `dom(A2) = {a,b,c}`.
- The **Cartesian product** is `{<0,a>, <0,b>, <0,c>, <1,a>, <1,b>, <1,c>}`.
- A relation state **r(R)** could be `{<0,a>, <0,b>, <1,c>}`, representing a valid subset of the Cartesian product.

**Relation**
![[Pasted image 20241017145913.png]]
**Attribute**
![[Pasted image 20241017145942.png]]
**Domain**
![[Pasted image 20241017150012.png]]
**Tuple**
![[Pasted image 20241017150047.png]]
**Schema**
![[Pasted image 20241017150153.png]]
**State**
![[Pasted image 20241017150123.png]]
**Cartesian Product**
![[Pasted image 20241017150852.png]]
![[Pasted image 20241017144028.png]]
### **Constraints in Databases**

Constraints ensure that data in a database adheres to certain rules and standards. They restrict what values can be entered into tables. There are three main types:

1. **Inherent or Implicit Constraints**:
    
    - Based on the structure of the data model itself.
    - Example: In the relational model, tuples (rows) cannot be duplicates.
2. **Schema-based or Explicit Constraints**:
    
    - Expressed in the database schema using the facilities of the data model.
    - Example: Maximum cardinality in the ER model (like one-to-many relationships).
3. **Application-based or Semantic Constraints**:
    
    - Constraints that are beyond the expressive capabilities of the data model.
    - They must be enforced by application logic.
    - Example: A business rule like “a customer can place no more than five orders in a day.”

### **Relational Integrity Constraints**

These are conditions that must hold true for all valid states of a relation (table) and include:

1. **Key Constraints**:
    - **Superkey**: A set of attributes in a relation that can uniquely identify tuples. No two tuples can have the same values for these attributes.
    - **Key**: A minimal superkey. It uniquely identifies tuples in a relation with the fewest possible attributes (also called a **candidate key**).
2. **Entity Integrity Constraints**:
    
    - Ensures that the primary key of a table must not be null.
    - Every row must have a unique identifier.
3. **Referential Integrity Constraints**:
    
    - Ensures that foreign keys in one relation correspond to primary keys in another.
    - Example: In a `CUSTOMER` and `ORDER` table, an order must reference a valid customer.
4. **Domain Constraints**:
    
    - Every value in an attribute must come from the domain of that attribute.
    - Example: The `Phone#` attribute in a table may only accept a valid phone number format or be null if allowed.
    - 
**Properties of Transactions**
Transactions are changes to the database state (INSERT, DELETE, UPDATE, etc., accessing or updating databases). They must obey ACID principles:
1. **Atomicity**: A transaction is either executed wholly or fails wholly, not partwise.
2. **Consistency**: The transactions must not violate the constraints of the schema.
3. **Isolation**: Each transaction appears to be executed in isolation.
4. **Durability**: A transaction, once committed remains saved, even in case of system failure.

**Database Functions**:
1. Controlling Redundancy
2. Restricting Unauthorized Access
3. Efficient Query Processing
4. Backup & Recovery
5. Multiple User Interfaces
6. Representing Complex Relationships
7. Rules and Triggers

**Three-Schema Architecture**:
- **Internal Schema**: Physical storage and access paths.
- **Conceptual Schema**: Overall structure and constraints for users.
- **External Schemas**: Different user views, often based on the conceptual schema.

**Relational Model Terms**
**Relation**
![[Pasted image 20241017145913.png]]
**Attribute**
![[Pasted image 20241017145942.png]]
**Domain**
![[Pasted image 20241017150012.png]]
**Tuple**
![[Pasted image 20241017150047.png]]
**Schema**
![[Pasted image 20241017150153.png]]
**State**
![[Pasted image 20241017150123.png]]
**Cartesian Product**
![[Pasted image 20241017150852.png]]

**Constraints**
1. **Implicit**: of the way the data can be stored, ex. the system is not able to store duplicate tuples
2. **Explicit**: of the relational schema, ex. an employee can have only one supervisor
3. **Semantic**: of the application, ex. a peon cannot earn more than 50000 per month for my company

**Key Attributes**
1. **Super Key**: Any set of attributes that can uniquely identify all the attributes in that table.
2. **Candidate Key**: Any minimal *superkey*.
3. **Primary Key**: Arbitrarily chosen *candidate key*.
4. **Prime Attribute**: Any attribute of a *candidate key*.
5. **Foreign Key**: Any minimal set of attributes that references a *primary key* of another table.

**Relational Integrity Constraints** (*Explicit*)
1. **Key**: There cannot be more than one tuple with the same primary key.
2. **Entity Integrity**: No prime attribute can be `NULL`.
3. **Referential Integrity**: Every foreign key must either reference another valid primary key, or must be wholly `NULL`. 
4. **Domain**: Every value must be in the domain of that attribute type. Ex. Phone Number cannot contain letters

**Updates**
1. `INSERT`: can violate 1, 2, 3,4
2. `DELETE`: can violate 3
3. `UPDATE`: can violate 1, 2, 3, 4
**Possible Solutions**
1. `RESTRICT`: reject the whole operation
2. `CASCADE`: propagate the change to the other places it is being violated
3. `SET NULL`: set FK to NULL where it is being violated


**Relational Algebra**
1. $\sigma$ : select rows (conditionally) 
2. $\pi$ : project (select columns)
3. $\bowtie$ : bowtie
4. $\rho(a/b)$ : rename $b$ as $a$
5. $\cup$ : set union
6. $\cap$ : set intersection
7. $-$ set difference

$\pi_{Name, Age}(\sigma_{Income > 30000}(PEONS - CLERKS))$
Project the name and age of the peons who are not clerks who have income greater than 30000


**SQL**

```SQL
CREATE TABLE COMPANY.EMPLOYEES
(
Name VARCHAR(30) NOT NULL,
Age INT,
Bdate DATE,
Department INT DEFAULT 299,
Ssn INT PRIMARY KEY,
PRIMARY KEY (Ssn),
FOREIGN KEY (Department) REFERENCES DEPARTMENTS(Dno) ON DELETE SET DEFAULT ON UPDATE CASCADE,
UNIQUE (Name),
Check Department > Age,
Check Age > 18
);

SHOW TABLES; -- List of all tables in that schema
USE DBMSS; -- Changes schema to DBMSS

INSERT INTO A VALUES (B); -- inserts the comma separated tuple B into the table A
-- Instead of values, you can use a query in the same place to load it

CREATE TABLE A LIKE B (Query) WITH DATA; -- Creates a new table A with the data from Query, with the same format as table B

DELETE FROM A WHERE B; -- Deletes all the tuples from A which obey condition B

UPDATE A SET B=C, D=E WHERE F; -- Changes the values of B to C, of D to E, in table A, for whichever tuples obey condition F

SELECT A FROM B WHERE C GROUP BY D HAVING E ORDER BY F; -- Select the columns A, from the tables B, where the conditions C apply, grouped as per E, reject groups disobeying E, order by F

SELECT ALL A FROM B; -- duplicates retained
SELECT DISTINCT FROM B; -- duplicates not shown
SELECT A FROM B WHERE (C) IN (Query); -- nested Query, checks if attributes C are in the result of "Query", C must be a tuple in the same format as the results of C

SELECT A FROM B WHERE (C) IS NULL;
SELECT A FROM B WHERE (C) IS NOT NULL; 

SELECT A FROM B WHERE (C) LIKE "%__X__%"; -- Matches any substring of C with __X__ with _ being any character, and % representing any number of any character

SELECT A FROM B WHERE C = EXISTS(Query);
SELECT A FROM B WHERE C = NOT EXISTS(Query);
SELECT A FROM B WHERE C > ANY (Query); -- Can also be used: SOME, ALL
SELECT A FROM B WHERE C = ANY (4,5, 39);

CREATE VIEW View_name AS Query; -- Query is aliased as view_name, typing View_name gets the full newest results of Query

DROP SCHEMA COMPANY CASCADE;
DROP TABLE DEPENDENT CASCADE;
ALTER TABLE A ADD COLUMN B INT;
ALTER TABLE A DROP CONSTRAINT B CASCADE; -- Drop the constraint named B from A
ALTER TABLE A DROP COLUMN B RESTRICT; -- Drop the column named B from A

ALTER TABLE A ALTER COLUM Age DROP DEFAULT;
ALTER TABLE A ALTER COLUM Age SET DEFAULT "333";

A NATURAL JOIN B; -- A and B should have one or more columns with the same name, else cartesian product
A INNER JOIN B On A.C=B.D; -- Only includes matching tuples
A LEFT OUTER JOIN B On A.C=B.D; -- Includes all tuples from A, with matching tuples from B, or NULL
A RIGHT OUTER JOIN B On A.C=B.D; -- Includes all tuples from B, with matching tuples from A, or NULL

```


Normal Forms
1. No composite or multi valued attributes
2. No partial dependencies of non prime attributes
3. No transitive dependencies of non prime attributes
4. Only (super) candidate keys may determine any attribute.
