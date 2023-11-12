#include <stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
//----------------------------------Q1:
// struct ContactInfo{      //Structure to store contact information:
//    char name[30]; char email[30]; char phoneNo[20]; };
// int main(){
//     struct ContactInfo*AddressBook=NULL; int numContacts=0;
//     while(1){
//         printf("\nADDRESS BOOK\n"); printf("1. Add Contacts\n"); printf("2. Delete Contact\n"); printf("3. View Address Book\n"); printf("4. Exit\n"); 
//         printf("Enter your choice:"); int choice; scanf("%d",&choice);
//         switch(choice){
//             case 1:   //add new contacts
//                 numContacts++;
//                 if(numContacts==1){
//                     AddressBook=(struct ContactInfo*)malloc(numContacts*sizeof(struct ContactInfo));
//                 }else{
//                     AddressBook=(struct ContactInfo*)realloc(AddressBook,numContacts*sizeof(struct ContactInfo));
//                 }if(AddressBook==NULL){
//                     fprintf(stderr,"Memory Allocation Failed:\n"); exit(1);
//                 }
//                 printf("Enter Contact Details:");  printf("Name: ");scanf("%s",AddressBook[numContacts-1].name);
//                 printf("Email: ");scanf("%s",AddressBook[numContacts-1].email); printf("Phone No : ");scanf("%s",AddressBook[numContacts-1].phoneNo);
//                 break;
//             case 2: //delete a contact
//                 if(numContacts>0){
//                     int contactIndex; printf("enter the index of the contact to delete (0-%d): ",numContacts-1); scanf("%d",&contactIndex);
//                     if(contactIndex>=0 && contactIndex<numContacts){  //shift elements to fill the gap
//                         for(int i=contactIndex;i<numContacts-1;i++){
//                             AddressBook[i]=AddressBook[i+1];
//                         } numContacts--;
//                           AddressBook=(struct ContactInfo*)realloc(AddressBook,numContacts*sizeof(struct ContactInfo));
//                     }else{
//                         printf("invalid contact index:\n");}
//                 }else{
//                     printf("address book is empty.\n");}
//                 break;
//             case 3:   //view address book
//                 if(numContacts>0){
//                     printf("Address Book:\n");
//                     for(int i=0;i<numContacts;i++){
//                         printf("Contact %d:\n",i+1); printf("Name: %s\n",AddressBook[i].name);  printf("Email: %s\n",AddressBook[i].email);
//                         printf("Phone no : %s\n",AddressBook[i].phoneNo); printf("\n"); }
//                 }else{
//                     printf("Address book is empty.\n");
//                 }break;
//             case 4: //exit the program and free memory
//                 free(AddressBook); return 0;
//             default:
//                 printf("Invalid choice.please try again.\n");
//                 break;
//         }
//     }
//     return 0;
// }
//---------------------------------Q2:
// struct Node {
//     int data; struct Node* next; };
// void insert(struct Node** head, int value) {  // Function to insert a new node at the end of a linked list
//     struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//     newNode->data = value; newNode->next = NULL;
//     if (*head == NULL) {
//         *head = newNode;
//     } else {
//         struct Node* currentNode = *head;
//         while (currentNode->next != NULL) {
//             currentNode = currentNode->next;
//         }
//         currentNode->next = newNode;}
// }
// struct Node* mergeLinkedLists(struct Node* list1, struct Node* list2) { // Function to merge two sorted linked lists into a single sorted linked list
//     if (list1 == NULL)
//         return list2;
//     if (list2 == NULL)
//         return list1;
//     struct Node* mergedList = NULL; struct Node* tail = NULL;
//     if (list1->data <= list2->data) {
//         mergedList = list1; list1 = list1->next;
//     } else {
//         mergedList = list2; list2 = list2->next;
//     }
//     tail = mergedList;
//     while (list1 != NULL && list2 != NULL) {
//         if (list1->data <= list2->data) {
//             tail->next = list1;
//             list1 = list1->next;
//         } else {
//             tail->next = list2;
//             list2 = list2->next;
//         }
//         tail = tail->next;
//     }
//     if (list1 != NULL) {
//         tail->next = list1;
//     } else {
//         tail->next = list2;
//     }
//     return mergedList;
// }
// void printList(struct Node* head) { // Function to print the elements of a linked list
//     struct Node* currentNode = head;
//     while (currentNode != NULL) {
//         printf("%d ", currentNode->data);
//         currentNode = currentNode->next;
//     }
//     printf("\n");
// }
// int main() {
//     struct Node* list1 = NULL;// Create and populate the first linked list
//     insert(&list1, 1); insert(&list1, 3); insert(&list1, 5); insert(&list1, 7); insert(&list1, 9);
//     struct Node* list2 = NULL; // Create and populate the second linked list
//     insert(&list2, 2); insert(&list2, 4); insert(&list2, 6); insert(&list2, 8); insert(&list2, 10);
//     printf("List 1: ");
//     printList(list1);
//     printf("List 2: ");
//     printList(list2);
//     // Merge the two linked lists
//     struct Node* mergedList = mergeLinkedLists(list1, list2);
//     printf("Merged List: ");
//     printList(mergedList);
//     return 0;
// }
//---------------------------------Q3:
// struct Node {
//     int data;
//     struct Node* next;};
// void insert(struct Node** head, int value) { // Function to insert a new node at the beginning of a linked list
//     struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//     newNode->data = value;
//     newNode->next = *head;
//     *head = newNode;
// }
// // Function to convert a linked list into an array
// int* convertToArray(struct Node* head, int* length) {
//     int count = 0; // Count the number of nodes in the linked list
//     struct Node* currentNode = head;
//     while (currentNode != NULL) {
//         count++;
//         currentNode = currentNode->next;
//     }
//     int* array = (int*)malloc(count * sizeof(int));    // Allocate memory for the array
//     currentNode = head;  // Copy the elements of the linked list to the array
//     for (int i = 0; i < count; i++) {
//         array[i] = currentNode->data;
//         currentNode = currentNode->next;
//     }
//     *length = count;// Set the length of the array
//     return array;
// }
// void printArray(int* array, int length) { // Function to print an array
//     for (int i = 0; i < length; i++) {
//         printf("%d ", array[i]);
//     }
//     printf("\n");
// }
// int main() {
//     // Create and populate the linked list
//     struct Node* list = NULL; insert(&list, 9); insert(&list, 8); insert(&list, 7); insert(&list, 6); insert(&list, 5);
//     printf("Linked List: ");
//     struct Node* currentNode = list;
//     while (currentNode != NULL) {
//         printf("%d ", currentNode->data);
//         currentNode = currentNode->next;
//     }
//     printf("\n");
//     // Convert the linked list to an array
//     int length;
//     int* array = convertToArray(list, &length);
//     printf("Array: ");
//     printArray(array, length);
//     free(array); // Free the dynamically allocated memory for the array
//     return 0;
// }
//----------------------------------Q4:
// struct Node {
//     int data; struct Node* next;
// };
// void insert(struct Node** head, int value) { // Function to insert a new node at the beginning of a linked list
//     struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//     newNode->data = value;
//     newNode->next = *head;
//     *head = newNode;
// }
// void removeOddIndices(struct Node** head) { // Function to remove elements with odd indices from a linked list
//     if (*head == NULL)
//         return;
//     struct Node* prevNode = *head;
//     struct Node* currNode = (*head)->next;
//     while (prevNode != NULL && currNode != NULL) {
//         prevNode->next = currNode->next;
//         free(currNode);
//         prevNode = prevNode->next;
//         if (prevNode != NULL)
//             currNode = prevNode->next;
//     }
// }
// void printList(struct Node* head) { // Function to print the elements of a linked list
//     struct Node* currentNode = head;
//     while (currentNode != NULL) {
//         printf("%d ", currentNode->data);
//         currentNode = currentNode->next;
//     }
//     printf("\n");
// }
// int main() {
//     // Create and populate the linked list
//     struct Node* list = NULL;insert(&list, 9);insert(&list, 8);insert(&list, 7);insert(&list, 6);insert(&list, 5);insert(&list, 4);
//     insert(&list, 3);insert(&list, 2);insert(&list, 1);
//     printf("Original List: ");
//     printList(list);
//     removeOddIndices(&list);// Remove elements with odd indices
//     printf("List after Removing Elements with Odd Indices: ");
//     printList(list);
//     return 0;
// }