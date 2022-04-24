// Item.h

class Item {
   private:
      int itemCode;
      float unitPrice;
      float discount; // out of 100 e.g. discount = 15
   public:
      Item();
      Item(int code, float uPrice);
      ~Item();

      void setDiscount(float pdiscount);
      float getDiscount();
      float discountedPrice();
      void display();
};
