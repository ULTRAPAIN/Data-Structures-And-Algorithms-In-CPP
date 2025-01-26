# HashMaps in C++

A **HashMap** (also known as a hash table) is a data structure that stores key-value pairs. It is a very efficient way to implement associative arrays or dictionaries, where each key is mapped to a specific value. HashMaps allow for fast retrieval, insertion, and deletion of elements, usually in constant time, O(1).

---

## **Concept of HashMaps**

A **HashMap** works by using a **hash function** to compute an index (also called a **hash code**) into an array of buckets or slots, from which the desired value can be found. The key is hashed into an index, and the corresponding value is stored or retrieved at that index.

### Key Components:
- **Key**: The unique identifier used to store or access data in the HashMap.
- **Value**: The data associated with the key.
- **Hash Function**: A function that takes a key and maps it to an index in the hash table.
- **Bucket**: An array or linked list where the values are stored.

### How HashMap Works:
1. When you insert a key-value pair, the hash function is applied to the key, generating an index in the array.
2. The key-value pair is stored in the corresponding bucket at that index.
3. When you try to retrieve a value using a key, the hash function is applied to the key to find the index, and the value is returned from the corresponding bucket.
4. If two keys have the same hash code (a collision), the HashMap handles the collision, typically using methods like **chaining** (using linked lists) or **open addressing** (finding another empty slot).

---

## **Advantages of HashMaps**

- **Fast Lookup**: HashMaps provide O(1) average-time complexity for lookup, insertion, and deletion, making them ideal for situations where fast access to data is required.
- **Efficient**: They are more efficient than searching through lists or arrays for key-value pairs.
- **Dynamic Size**: HashMaps can grow dynamically as needed, depending on the number of elements stored.

---

## **Disadvantages of HashMaps**

- **Hash Collisions**: If two keys hash to the same index, it can cause collisions, leading to a slower lookup time.
- **Space Complexity**: HashMaps may require more space than arrays or lists due to the need for handling collisions.
- **Not Ordered**: In most implementations, HashMaps do not maintain any order of keys or values.

---

## **When to Use HashMaps**

- When you need fast access to data by a key (e.g., a dictionary of words and their meanings).
- When you need to count frequencies of elements efficiently (e.g., counting occurrences of words in a document).
- When you want to store a collection of unique keys and their associated values.

