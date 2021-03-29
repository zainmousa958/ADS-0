// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
                int result;
        while ((a != 0) && (b != 0)) {
                if (a > b)
        a -= b;
                else
        b -= a;
        }
        result = a + b;
                return result;
        }
