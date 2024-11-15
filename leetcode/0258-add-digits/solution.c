int addDigits(int num) {
    while (num > 9) {
        int sum = 0;
        while (num != 0) {
            sum += num % 10; // Add the last digit to sum
            num /= 10;       // Remove the last digit
        }
        num = sum;           // Update num with the sum of digits
    }
    return num;              // Return the single-digit result
}

