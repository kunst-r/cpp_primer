// Which of the following are legal? For those that are illegal, explain why.

int main()
{
    const int buf; // error: const must be initialized
    int cnt = 0; // ok: standard initialization of an int
    const int sz = cnt; // ok: const int is initialized with an int value
    ++cnt; // ok: int object supports ++ operation
    ++sz; // error: const cannot change its value

    return 0;
}