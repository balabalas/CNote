#Struct (结构体)

1.define 定义    
  ```
  struct tagname 
  {
     type member;
  } variable;
  ```
  : tagname     可以省略。其表示为结构体的标识名。
    type        结构体中元素的类型。可以是基本类型，也可以是结构体类型，甚至可以是当前结构体类型。
    member      结构体中元素。
    variable    结构体类型的变量。
  例如：
  ```
  struct point
  {
      int x;
      int y;
  } p1, p2;
  ```
   
2. 赋值方式    
    对于不是指针类型的结构体，可以直接赋值。但指针类型的不行。
  ```
  struct point 
  {
      int x;
      int y;
  };
  
  struct point p1 = {11, 22};
  struct point *pp = &p1;
  ```
   
3. 元素引用   
    一般来说，使用variable.member的方式来引用结构体中元素。
但是，指针类型的需要注意这样的引用。指针类型用得较多的是->这种方式。
引用时候:
    p1.x, p1.y
    (*pp).x, (*pp).y 或 pp->x, pp->y // operator . is higher than *
    操作符.的优先级大于*的优先级。操作符->就相当于简化的(* ).









