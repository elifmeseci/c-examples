# Strings

Strings are actually one-dimensional array of characters terminated by a null character '\0'. Thus a null-terminated string contains the characters that comprise the string followed by a null.

![string example](https://www.tutorialspoint.com/cprogramming/images/string_representation.jpg)

* Assigning a literal string without size

    char str[] = “Hello”;

* Assigning a literal string with a predefined size

    char str[6] = “Hello”;  

* Assigning haracter by character without size

    char str[] = {‘H’, ‘e’, ‘l’, ‘l’, ‘o’, '\0'};  

* Assigning character by character with size

    char str[6] = {‘H’, ‘e’, ‘l’, ‘l’, ‘o’, '\0'};

*Note*: String can be assigned different ways as above. Here, the name of the string str acts as a pointer because it is an array.  When assigning a string character by character without size, NULL character should be at the end. Thus the size of the string is determined by the compiler automatically.

## gets()

gets(str); 		->  Takes the string until ‘\n’ 

scanf(“%s”, str);	-> Takes the string until next space character 


    char fullName[30];

    printf("Type your full name: \n");
    scanf("%s", &fullName);

    printf("Hello %s", fullName);

    // Type your full name: John Doe
    // Hello John

    printf("Type your full name: \n");
    gets(fullName);

    printf("Hello %s", fullName);

    // Type your full name: John Doe
    // Hello John Doe
