# base-n-trainer

Command-line program for training conversion of multiple base-n counting systems. 

Currently has base-2(binary), with planned implementation of base-8 and base-16.

## Use

```
./main [type] [# of questions] [difficulty]
```

For `[type]`, refer to the table <a href="#type-help">below.</a>
`[# of questions]` is self-explanatory, and takes an integer value. 
`[difficulty]` refers to the number of digits (decimal/base-10) of the answer or the question.

### Type help
| Type keyword | Conversion question |
| :----------: | ------------------- |
| bti          | Binary to integer   |
| itb          | Integer to binary   |

## Compilation

Using gcc:

```bash
gcc -o main *.c -lm
```