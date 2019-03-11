/**
 * 访问修饰符
 * @author unknow
 */
class Base {
    public:
    // 公有成员
 
    protected:
    // 受保护成员
 
    private:
    // 私有成员 
};

// ------------------------------------------------------------------------------------------------------------------------ >
// 继承方式	         基类的public成员    基类的protected成员	    基类的private成员       继承引起的访问控制关系变化概括
// public继承        仍为public成员      仍为protected成员          不可见                  基类的非私有成员在子类的访问属性不变
// protected继承     变为protected成员   变为protected成员          不可见	                基类的非私有成员都为子类的保护成员
// private继承       变为private成员     变为private成员            不可见                  基类中的非私有成员都称为子类的私有成员
// ------------------------------------------------------------------------------------------------------------------------ >

class Cat : public Base {

}

class Dog : protected Base {
    
}

class Dump : private Base {
    
}