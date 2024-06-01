# what is DBMS?
DBMS are software systems used to store, retrieve, and run queries on data.

# what is data?
data is an individual unit that contains raw materials which do not carry any specific meaning.

# what is information?
Information is a group of data that collectively carries a logical meaning.

# type of database?

# what is data redundancy?
Data redundancy occurs when the same piece of data exists in multiple places, whereas data inconsistency is when the same data exists in different formats in multiple tables.

# what is data inconsistency?
there are more than 2 tables within a database that work with the same data but receive it from different inputs.aikhane 2 ta table a salary ar name ache. to 2 table a akoi name er salary different atakei data inconsistency bole.

# data atomicity?.
Atomicity is a property of database transactions that ensures that a set of database operations either all occur, or none occur. (aikhane kokhono data ordhek upload hobe ar ordehek hobe na erokom kokhono hobe na. hole sobgulo upload hobe otherwise aktao hobe na)

# data abstruction?
it is a process of hiding unwanted or irrelevent details from the end user.

# what is RDBMS?
structure data base is a RDBMS.



# Primary Key

## Definition
A primary key is a specific type of candidate key chosen to uniquely identify records in a table. It ensures that each record can be uniquely identified by this key and enforces entity integrity.

## Characteristics
- Must be unique for each record.
- Cannot contain NULL values.
- There can only be one primary key per table.

# what is candidate key?
## Definition
A candidate key is a minimal set of one or more columns that can uniquely identify a record in a table. Each table can have multiple candidate keys, but only one of them is chosen as the primary key.

##  Characteristics
- Must be unique for each record.
- Must be minimal, meaning it contains no unnecessary columns.
- Can contain one or multiple columns.


The minimal set of attributes that can be uniquely identify a tuple is known as a candidate key.
A candidate key is a subset of a super key set where the key which contains no redundant attribute is none other than a Candidate Key.candidate key null hote parbe. jemon akjon student er email candidate key.so email nao thakte pare. aikhane email er jaygae null hobe. 
# composite key.

## Definition
A composite key is a type of candidate key that consists of two or more columns used together to uniquely identify a record in a table.

## Characteristics
- Must be unique for each record when the combination of columns is considered.
- Necessary when a single column is not sufficient to uniquely identify records.
A composite key is a key that consists of two or more columns used together to uniquely identify a record in a table. It can be a candidate key or a primary key if chosen as such.


# what is super key?

## Definition
A super key is any set of one or more columns that can uniquely identify a record in a table. It may include more columns than necessary (i.e., it can be a non-minimal key).

## Characteristics
- Must be unique for each record.
- Can contain additional columns beyond those necessary for unique identification.
- 
super key is a single key or a group of multiple keys that can uniqly identify tuples in a table.<br>
A designated minimal super key that uniquely identifies each record and is chosen to enforce entity integrity. It can be a single column or a composite key.


# what is foreign key?
A FOREIGN KEY is a field (or collection of fields) in one table, that refers to the PRIMARY KEY in another table.

# Summary

## primary key:
The chosen candidate key for unique identification of records. Unique, non-null, and minimal. Only one per table.
## Candidate Key: 
Any minimal set of columns that can uniquely identify a record. Can be one or multiple columns. A table can have multiple candidate keys.
## Composite Key: 
A type of candidate key that consists of multiple columns. Unique when combined.
## Super Key: 
Any set of columns that can uniquely identify a record. Can be minimal or non-minimal and may contain redundant columns.

# Characteristics of Relational Databases

## Tabular Structure
- Data is organized into tables consisting of rows and columns.

## Data Integrity
- Ensured through constraints like primary keys and foreign keys.

## Relationships
- Support for establishing connections between tables, typically using primary key-foreign key relationships.

## Structured Query Language (SQL)
- Standard language for managing and querying relational databases.

## Normalization
- Techniques used to minimize redundancy and dependency within data.

## ACID Properties
- Ensures transactional integrity through Atomicity, Consistency, Isolation, and Durability.

## Data Independence
- Changes to the database schema don't affect applications accessing the data.

## Concurrency Control
- Mechanisms to manage simultaneous access by multiple users.

## Scalability
- Capable of scaling vertically and horizontally to handle increasing workloads.

## Security
- Provides robust security features to protect data from unauthorized access or manipulation.



# ACID Properties of Relational Databases

This README file outlines the ACID properties characterizing relational databases.

## Atomicity
- Transactions are treated as indivisible units of work.
- Either all operations within a transaction are completed successfully, or none are.
- If any part fails, the entire transaction is rolled back.

## Consistency
- Ensures that the database remains in a consistent state before and after a transaction.
- Data integrity constraints are maintained, and the database remains valid at all times.

## Isolation
- Transactions execute independently of each other.
- Changes made by one transaction are not visible to other transactions until they are committed.
- This prevents interference and maintains data integrity.

## Durability
- Committed changes are permanent and survive system failures.
- Once a transaction is successfully committed, its effects remain even in the event of crashes or power outages.
- 
# what is Normalization?
it is used to remove or reduce the redundency from a relation
# difference between DBMS and RDBMS?
DBMS can be Structure or untructured data.but RDBMS must be structure data.
DBMS supports varius storage in various formats.RDBMS organizes data in tabular format with row and column

