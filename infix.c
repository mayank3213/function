#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100
int is_operator(char ch) {
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/');
}
int precedence(char ch) {
    if (ch == '+' || ch == '-')
        return 1;
    if (ch == '*' || ch == '/')
        return 2;
    return 0;
}
void infix_to_postfix(const char *infix, char *postfix) {
	int i;
    char stack[MAX_SIZE];
    int top = -1;

    int len = strlen(infix);
    int j = 0;

    for (i = 0; i < len; i++) {
        char ch = infix[i];

        if (ch == ' ') {
            continue;
        } else if (isalnum(ch)) {
            postfix[j++] = ch;
        } else if (ch == '(') {
            stack[++top] = ch;
        } else if (ch == ')') {
            while (top >= 0 && stack[top] != '(') {
                postfix[j++] = stack[top--];
            }
            if (top >= 0 && stack[top] == '(') {
                top--;
            }
        } else if (is_operator(ch)) {
            while (top >= 0 && precedence(stack[top]) >= precedence(ch)) {
                postfix[j++] = stack[top--];
            }
            stack[++top] = ch;
        }
    }
    while (top >= 0) {
        postfix[j++] = stack[top--];
    }
    postfix[j] = '\0';
}

int main() {
    char infix1[] = "A+B*C";
    char postfix1[MAX_SIZE];
    infix_to_postfix(infix1, postfix1);
    printf("Input: %s\n", infix1);
    printf("Output: %s\n", postfix1);

    char infix2[] = "X * Y+Z";
    char postfix2[MAX_SIZE];
    infix_to_postfix(infix2, postfix2);
    printf("Input: %s\n", infix2);
    printf("Output: %s\n", postfix2);

}