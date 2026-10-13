extern int a; //Exter1.cppのaを参照
void Func(); // Exter1.cppのFuncを参照

int main() {
	Func();
	a = 5;
	Func();
}