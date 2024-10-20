# Ersatz Calculator

A simple calculator that accepts basic statements as arguments.

## Usage:
```bash
ersatz <number> <operator> <number>
```

For example:
```
./ersatz 42 + 21
```
## Problems
I discovered that argv is of type `char`. To be able to operate with them arithmetically, I need to convert them first to 'double's. I would prefer to write my own function for this so I'm going to learn to write my own header.


