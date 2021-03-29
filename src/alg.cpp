// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
                int result;
        while ((a != 0) && (b != 0)) {
                if (a < b)
        b -= a;
                else
        a -= b;
        }
        result = a + b;
                return result;
        }
