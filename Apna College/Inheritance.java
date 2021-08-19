class A {
    public int a;

    public void funA() {
        System.out.println("Fun A");
    }
}

class B extends A {
}

public class Inheritance {
    public static void main(String args[]) {
        A a = new B();
        // parent class obj ne child class no instance define kari sak jo extends kariyu
        // hoi B class ae A class ne
        a.funA();
    }
}