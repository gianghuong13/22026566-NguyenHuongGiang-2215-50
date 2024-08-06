string decimal_to_binary(long number)
{
    if (number==0) return "0";
    string res = "";
    while (number) {
        res = to_string(number%2) + res;
        number /= 2;
    }
    return res;
}