class Example2 {
	public:
		int total;
		Example2 (int initial_value) : total(initial_value) { };
		void accumulate (int x) { total += x; }
};

int main() {
	Example2 ex (100); // ok: calls constructor
}