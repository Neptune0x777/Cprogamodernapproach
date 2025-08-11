The following function is supposed Lo return t.rue if any ele1nent of che array a has lhe
value Oand false if all ele1nentr; are nonzero. Sadly, it contains an error. Find the enrror

bool has_zero(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++) {
        if (a[i] == 0)
            return true;
        else
            return false;  // there the return false is in the for
    }
    return false; // put him there
}

