# DynamoDB Quiz

## Introduction

This document contains a series of multiple-choice questions (MCQs) and their answers related to Amazon DynamoDB. These questions are designed to test your knowledge of DynamoDB concepts, features, and best practices.

## Questions and Answers

### Question 1:
**What is the primary purpose of Amazon DynamoDB?**

a) To manage cloud storage  
b) To run large-scale data analysis  
c) To provide a NoSQL database service  
d) To facilitate content delivery  

**Answer:** c) To provide a NoSQL database service

---

### Question 2:
**Which of the following is a unique identifier for an item in a DynamoDB table?**

a) Partition key  
b) Sort key  
c) Secondary index  
d) Both a and b  

**Answer:** d) Both a and b

---

### Question 3:
**Which of the following statements about DynamoDB is true?**

a) DynamoDB is a relational database.  
b) DynamoDB automatically scales its capacity.  
c) DynamoDB does not support secondary indexes.  
d) DynamoDB requires manual sharding.  

**Answer:** b) DynamoDB automatically scales its capacity

---

### Question 4:
**In DynamoDB, what is a 'table'?**

a) A collection of items  
b) A collection of databases  
c) A single item  
d) A specific attribute  

**Answer:** a) A collection of items

---

### Question 5:
**What is the maximum size of an item in DynamoDB?**

a) 1 KB  
b) 4 KB  
c) 400 KB  
d) 1 MB  

**Answer:** c) 400 KB

---

### Question 6:
**Which of the following operations would you use to fetch multiple items from DynamoDB based on their primary key?**

a) Scan  
b) Query  
c) BatchGetItem  
d) PutItem  

**Answer:** c) BatchGetItem

---

### Question 7:
**What type of read consistency does DynamoDB offer?**

a) Strongly consistent reads  
b) Eventually consistent reads  
c) Both a and b  
d) Neither a nor b  

**Answer:** c) Both a and b

---

### Question 8:
**What does the TransactWriteItems operation in DynamoDB do?**

a) Reads multiple items from the table  
b) Writes multiple items in a single transaction  
c) Deletes multiple items from the table  
d) Updates the provisioned throughput for the table  

**Answer:** b) Writes multiple items in a single transaction

---

### Question 9:
**Which of the following methods would you use to retrieve an item by its primary key?**

a) Scan  
b) Query  
c) GetItem  
d) PutItem  

**Answer:** c) GetItem

---

### Question 10:
**What is the use of a Global Secondary Index (GSI) in DynamoDB?**

a) To create a backup of the table  
b) To allow for querying on non-primary key attributes  
c) To speed up write operations  
d) To replicate the table to another AWS region  

**Answer:** b) To allow for querying on non-primary key attributes

---

### Question 11:
**How does DynamoDB handle read and write capacity units?**

a) Each read and write request uses a fixed amount of capacity units.  
b) Read capacity units are only used for read operations, and write capacity units are only used for write operations.  
c) Both read and write operations use the same capacity units.  
d) DynamoDB does not use capacity units.  

**Answer:** b) Read capacity units are only used for read operations, and write capacity units are only used for write operations.

---

### Question 12:
**What is the purpose of a Local Secondary Index (LSI) in DynamoDB?**

a) To enable strong consistency in reads  
b) To provide an alternative sort key for queries  
c) To increase storage capacity  
d) To replicate data across regions  

**Answer:** b) To provide an alternative sort key for queries

---

### Question 13:
**Which of the following best describes the PutItem operation in DynamoDB?**

a) Retrieves an item from the table.  
b) Adds a new item or replaces an old item with a new item.  
c) Deletes an item from the table.  
d) Queries for items that match specific criteria.  

**Answer:** b) Adds a new item or replaces an old item with a new item.

---

### Question 14:
**What does the ConditionExpression parameter do in a DynamoDB operation?**

a) Specifies the condition that must be met for a PutItem or UpdateItem operation to succeed.  
b) Determines the read consistency.  
c) Specifies the partition key for a query.  
d) Limits the number of items returned by a scan operation.  

**Answer:** a) Specifies the condition that must be met for a PutItem or UpdateItem operation to succeed.

---

### Question 15:
**Which of the following is true about the Scan operation in DynamoDB?**

a) It is the most efficient way to retrieve items.  
b) It reads all items in a table and can filter results afterwards.  
c) It requires a partition key.  
d) It does not support pagination.  

**Answer:** b) It reads all items in a table and can filter results afterwards.

---

### Question 16:
**What does the UpdateItem operation in DynamoDB do?**

a) Adds a new item to the table.  
b) Updates an existing item's attributes.  
c) Deletes an item from the table.  
d) Queries items from the table.  

**Answer:** b) Updates an existing item's attributes.

---

### Question 17:
**In DynamoDB, what is a projection?**

a) The primary key of the table.  
b) A set of attributes that are copied from a table into an index.  
c) The process of backing up the table.  
d) The partitioning method used by DynamoDB.  

**Answer:** b) A set of attributes that are copied from a table into an index.

---

### Question 18:
**How can you improve the performance of a Scan operation in DynamoDB?**

a) Use a FilterExpression.  
b) Increase the provisioned throughput.  
c) Use parallel scans.  
d) Create a Local Secondary Index (LSI).  

**Answer:** c) Use parallel scans.

---

### Question 19:
**What does the ReturnConsumedCapacity parameter do in a DynamoDB request?**

a) Returns the total number of write operations consumed.  
b) Returns the total number of read operations consumed.  
c) Returns the capacity units consumed by the operation.  
d) Returns the size of the item read or written.  

**Answer:** c) Returns the capacity units consumed by the operation.

---

### Question 20:
**What is a Global Table in DynamoDB?**

a) A table that is replicated across multiple AWS regions.  
b) A table that has a global secondary index.  
c) A table that can be accessed by any AWS account.  
d) A table with an unlimited number of items.  

**Answer:** a) A table that is replicated across multiple AWS regions.

---

### Question 21:
**How does DynamoDB ensure the durability of data?**

a) By writing data to a single server.  
b) By using a multi-AZ replication strategy.  
c) By performing daily backups.  
d) By storing data on SSDs.  

**Answer:** b) By using a multi-AZ replication strategy.

---

### Question 22:
**What is the use of the CapacityMode setting in DynamoDB?**

a) To define whether the table is for read or write operations.  
b) To specify whether the table uses on-demand or provisioned capacity.  
c) To configure the secondary indexes.  
d) To enable or disable encryption at rest.  

**Answer:** b) To specify whether the table uses on-demand or provisioned capacity.

---

### Question 23:
**What is a Time To Live (TTL) attribute in DynamoDB?**

a) A timestamp that indicates when an item should be deleted.  
b) The maximum amount of time a query can run.  
c) The duration for which an item is cached.  
d) The time taken for replication across regions.  

**Answer:** a) A timestamp that indicates when an item should be deleted.

---

### Question 24:
**How can you enable encryption at rest for a DynamoDB table?**

a) Use an AWS KMS key.  
b) Configure the table's provisioned throughput.  
c) Create a Global Secondary Index.  
d) Set a ConditionExpression for all writes.  

**Answer:** a) Use an AWS KMS key.

---

### Question 25:
**What is the function of a DynamoDB Stream?**

a) To backup the table data.  
b) To capture changes to items in the table.  
c) To improve read performance.  
d) To replicate the table across regions.  

**Answer:** b) To capture changes to items in the table.

---

### Question 26:
**Which of the following DynamoDB data types is used to store binary data?**

a) B  
b) N  
c) S  
d) L  

**Answer:** a) B

---

### Question 27:
**What is the purpose of the ExpressionAttributeValues parameter in a DynamoDB query?**

a) To define the attributes to be retrieved in the result set.  
b) To substitute the actual values in a query or scan filter expression.  
c) To specify the attributes that should be projected into the index.  
d) To control the consistency of the read operation.  

**Answer:** b) To substitute the actual values in a query or scan filter expression.

---

### Question 28:
**How can you reduce the cost of read and write operations in DynamoDB?**

a) Use strong consistency for all read operations.  
b) Use Global Secondary Indexes for all queries.  
c) Use on-demand capacity mode for unpredictable workloads.  
d) Use provisioned capacity mode and auto-scaling for predictable workloads.  

**Answer:** d) Use provisioned capacity mode and auto-scaling for predictable workloads.

---

### Question 29:
**What does the ProjectionExpression parameter do in a DynamoDB operation?**

a) It filters the results returned by a query or scan.  
b) It defines a set of attributes to be retrieved from the table.  
c) It specifies the attributes that should be included in the index.  
d) It controls the read consistency of the operation.  

**Answer:** b) It defines a set of attributes to be retrieved from the table.

---

### Question 30:
**What is the primary benefit of using DynamoDB Accelerator (DAX)?**

a) To improve write performance.  
b) To provide in-memory caching for read-heavy workloads.  
c) To support multi-region replication.  
d) To enable point-in-time recovery.  

**Answer:** b) To provide in-memory caching for read-heavy workloads.

---

### Question 31:
**In DynamoDB, what is the purpose of Auto Scaling?**

a) To automatically adjust throughput capacity based on actual traffic.  
b) To replicate data across multiple AWS regions.  
c) To backup and restore data.  
d) To provide in-memory caching.  

**Answer:** a) To automatically adjust throughput capacity based on actual traffic.

---

### Question 32:
**Which of the following best describes the BatchWriteItem operation in DynamoDB?**

a) It reads multiple items from the table.  
b) It writes multiple items to the table in a single request.  
c) It updates multiple items in a single transaction.  
d) It scans the entire table.  

**Answer:** b) It writes multiple items to the table in a single request.

---

### Question 33:
**How does DynamoDB handle large items that exceed 400 KB?**

a) It splits the item across multiple partitions.  
b) It stores the item in S3 and references it.  
c) It rejects the item.  
d) It compresses the item to fit within 400 KB.  

**Answer:** c) It rejects the item.

---

### Question 34:
**What does a Sparse Index refer to in DynamoDB?**

a) An index that includes all items in the table.  
b) An index that only includes items where the indexed attribute is present.  
c) An index that replicates data across regions.  
d) An index that uses eventual consistency.  

**Answer:** b) An index that only includes items where the indexed attribute is present.

---

### Question 35:
**What is the default read consistency for DynamoDB queries?**

a) Strongly consistent reads  
b) Eventually consistent reads  
c) Consistent reads with a delay  
d) None of the above  

**Answer:** b) Eventually consistent reads

---

### Question 36:
**What does the UpdateExpression parameter do in an UpdateItem operation?**

a) Specifies the primary key of the item to be updated.  
b) Defines the attributes to be updated and their new values.  
c) Controls the read consistency of the operation.  
d) Filters the results returned by the operation.  

**Answer:** b) Defines the attributes to be updated and their new values.

---

### Question 37:
**What is the purpose of a Local Secondary Index (LSI) in DynamoDB?**

a) To allow queries on non-primary key attributes.  
b) To provide an alternative sort key for queries on the same partition key.  
c) To enable cross-region replication.  
d) To store large binary files.  

**Answer:** b) To provide an alternative sort key for queries on the same partition key.

---

### Question 38:
**How can you perform atomic counter updates in DynamoDB?**

a) Use the UpdateItem operation with the ADD action.  
b) Use the PutItem operation with a condition expression.  
c) Use the TransactWriteItems operation.  
d) Use the BatchWriteItem operation.  

**Answer:** a) Use the UpdateItem operation with the ADD action.

---

### Question 39:
**What is the purpose of Conditional Writes in DynamoDB?**

a) To ensure data consistency by only performing the write if a condition is met.  
b) To allow for eventual consistency in write operations.  
c) To replicate data across multiple regions.  
d) To improve read performance.  

**Answer:** a) To ensure data consistency by only performing the write if a condition is met.

---

### Question 40:
**How does DynamoDB handle item versioning?**

a) It stores multiple versions of each item.  
b) It uses the PutItem operation to overwrite the previous version.  
c) It uses an UpdateItem operation with a condition expression to check the version number.  
d) It does not support item versioning.  

**Answer:** c) It uses an UpdateItem operation with a condition expression to check the version number.

### Question 41:
**Which of the following best describes the BatchWriteItem operation in DynamoDB?**

a) It retrieves multiple items from the table.  
b) It writes multiple items to the table in a single request.  
c) It updates multiple items in a single transaction.  
d) It scans the entire table.  

**Answer:** b) It writes multiple items to the table in a single request.

---

### Question 42:
**What is a primary benefit of using BatchWriteItem in DynamoDB?**

a) It allows for large-scale item retrieval.  
b) It reduces the number of network round trips needed for multiple write operations.  
c) It ensures strong consistency for read operations.  
d) It automatically scales the provisioned throughput.  

**Answer:** b) It reduces the number of network round trips needed for multiple write operations.

---

### Question 43:
**When using BatchWriteItem, what types of operations can you perform?**

a) Only PutItem operations  
b) Only DeleteItem operations  
c) Both PutItem and DeleteItem operations  
d) Both PutItem and UpdateItem operations  

**Answer:** c) Both PutItem and DeleteItem operations

---

### Question 44:
**Which statement is true about unprocessed items in a BatchWriteItem operation?**

a) They are automatically retried until successful.  
b) They are ignored and must be manually retried.  
c) They result in an error, stopping the entire batch operation.  
d) They are deleted from the request without any retries.  

**Answer:** b) They are ignored and must be manually retried.

---

### Question 45:
**What is the maximum number of items that can be included in a single BatchWriteItem request?**

a) 10  
b) 25  
c) 50  
d) 100  

**Answer:** b) 25

---

### Question 46:
**In a BatchWriteItem operation, how are capacity units consumed?**

a) All items in the batch consume the same number of capacity units.  
b) Capacity units are only consumed for successful writes.  
c) Capacity units are consumed based on the size of each item and the type of operation (put or delete).  
d) Capacity units are not consumed in a BatchWriteItem operation.  

**Answer:** c) Capacity units are consumed based on the size of each item and the type of operation (put or delete).

---

### Question 47:
**What does the DeleteItem operation in DynamoDB do?**

a) It removes an item from a table based on its primary key.  
b) It removes all items from a table.  
c) It updates an item’s attributes to null values.  
d) It scans the table and removes items matching a condition.  

**Answer:** a) It removes an item from a table based on its primary key.

---

### Question 48:
**How can you ensure that a DeleteItem operation only succeeds if an item meets certain conditions?**

a) Use a ConditionExpression parameter in the DeleteItem request.  
b) Use a FilterExpression parameter in the DeleteItem request.  
c) Use an UpdateExpression parameter in the DeleteItem request.  
d) Use the ReturnConsumedCapacity parameter in the DeleteItem request.  

**Answer:** a) Use a ConditionExpression parameter in the DeleteItem request.

---

### Question 49:
**What happens if a DeleteItem operation in DynamoDB specifies a ConditionExpression that is not met?**

a) The item is deleted anyway.  
b) The request fails and the item is not deleted.  
c) The item is partially deleted.  
d) The request succeeds but no item is deleted.  

**Answer:** b) The request fails and the item is not deleted.

---

### Question 50:
**What does the ReturnValues parameter in a DeleteItem operation specify?**

a) The attributes to be updated.  
b) The attributes to be returned after the deletion.  
c) The conditions that must be met for deletion to succeed.  
d) The provisioned throughput for the table.  

**Answer:** b) The attributes to be returned after the deletion.

---

### Question 51:
**Which of the following best describes the UpdateItem operation in DynamoDB?**

a) It replaces an item in the table.  
b) It modifies the attributes of an existing item.  
c) It retrieves an item from the table.  
d) It deletes an item from the table.  

**Answer:** b) It modifies the attributes of an existing item.

---

### Question 52:
**What is the purpose of the UpdateExpression parameter in an UpdateItem request?**

a) To define the conditions that must be met for the update to succeed.  
b) To specify the primary key of the item to be updated.  
c) To define the new attribute values and how they should be updated.  
d) To filter the results returned by the update operation.  

**Answer:** c) To define the new attribute values and how they should be updated.

---

### Question 53:
**How can you ensure an UpdateItem operation only updates an item if certain conditions are met?**

a) Use a ConditionExpression parameter in the UpdateItem request.  
b) Use a FilterExpression parameter in the UpdateItem request.  
c) Use a ProjectionExpression parameter in the UpdateItem request.  
d) Use the ReturnValues parameter in the UpdateItem request.  

**Answer:** a) Use a ConditionExpression parameter in the UpdateItem request.

---

### Question 54:
**What does the ADD action do in an UpdateItem operation?**

a) It adds a new item to the table.  
b) It appends a new value to an existing string or list attribute.  
c) It increments a numeric attribute.  
d) It replaces the current value of an attribute with a new value.  

**Answer:** c) It increments a numeric attribute.

---

### Question 55:
**What does the REMOVE action do in an UpdateItem operation?**

a) It removes an item from the table.  
b) It deletes all attributes from an item.  
c) It removes one or more attributes from an item.  
d) It clears the table.  

**Answer:** c) It removes one or more attributes from an item.

---

### Question 56:
**What is the result of using a SET action in an UpdateItem operation?**

a) It creates a new item in the table.  
b) It replaces the existing value of an attribute with a new value.  
c) It adds a new attribute to the item with a specified value.  
d) It deletes an attribute from the item.  

**Answer:** b) It replaces the existing value of an attribute with a new value.

---

### Question 57:
**In an UpdateItem operation, what does the ReturnValues parameter control?**

a) The amount of capacity units consumed by the update.  
b) The attributes that are returned after the update operation.  
c) The conditions under which the update should occur.  
d) The primary key of the item being updated.  

**Answer:** b) The attributes that are returned after the update operation.

---

### Question 58:
**Which of the following actions is not supported in an UpdateItem operation?**

a) SET  
b) REMOVE  
c) ADD  
d) DELETE  

**Answer:** d) DELETE

---

### Question 59:
**What is the purpose of the ExpressionAttributeNames parameter in an UpdateItem operation?**

a) To specify the attributes to be updated.  
b) To provide placeholder names for attribute names in an expression.  
c) To control the read consistency of the operation.  
d) To filter the results returned by the update operation.  

**Answer:** b) To provide placeholder names for attribute names in an expression.

---

### Question 60:
**What is a common use case for the ConditionExpression parameter in DynamoDB operations?**

a) To ensure that an item is only updated if it has a specific attribute value.  
b) To define the primary key for an item.  
c) To set the capacity mode for the table.  
d) To specify the projection expression for a query.  

**Answer:** a) To ensure that an item is only updated if it has a specific attribute value.
