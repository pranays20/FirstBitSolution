#include <stdio.h>

struct Product {
    int id;
    char name[50];
    int quantity;
    float price;
};

void store(struct Product p);                
void display(struct Product p);              
void storeAll(struct Product *arr, int n);  
void displayAll(struct Product *arr, int n); 
void showOne(struct Product *p);             

void main() {
    struct Product p1 = {101, "Pen", 10, 5.5};
    struct Product list[2];

    printf("\n--- Pass by Value ---\n");
    store(p1);      
    display(p1);

    printf("\n--- Pass Array by Address ---\n");
    storeAll(list, 2);  
    displayAll(list, 2);

    printf("\n--- Pass Single Structure by Address ---\n");
    showOne(&p1);       
}

void store(struct Product p) {
    printf("Enter Product ID: ");
    scanf("%d", &p.id);
    printf("Enter Product Name: ");
    scanf("%s", p.name);
    printf("Enter Quantity: ");
    scanf("%d", &p.quantity);
    printf("Enter Price: ");
    scanf("%f", &p.price);
    printf("Product stored (by value, local copy)\n");
}

void display(struct Product p) {
    printf("ID: %d, Name: %s, Qty: %d, Price: %.2f\n",
           p.id, p.name, p.quantity, p.price);
}

void storeAll(struct Product *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for product %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &arr[i].id);
        printf("Name: ");
        scanf("%s", arr[i].name);
        printf("Quantity: ");
        scanf("%d", &arr[i].quantity);
        printf("Price: ");
        scanf("%f", &arr[i].price);
    }
}

void displayAll(struct Product *arr, int n) {
    printf("\n--- Product List ---\n");
    for (int i = 0; i < n; i++) {
        printf("ID: %d, Name: %s, Qty: %d, Price: %.2f\n",
               arr[i].id, arr[i].name, arr[i].quantity, arr[i].price);
    }
}

void showOne(struct Product *p) {
    printf("\nProduct via Address:\n");
    printf("ID: %d, Name: %s, Qty: %d, Price: %.2f\n",
           p->id, p->name, p->quantity, p->price);
}
