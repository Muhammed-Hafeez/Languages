import { Item, Items } from "./items";
import { Order } from "./orders";
import { User } from "./users";
const items = new Items();
const order = new Order(items.list);
items.setItem("oregano pizza", 122);
items.setItem("chicken pizza", 50);
items.setItem("hawaii pizza", 12);
items.setItem("veggie pizza", 10);

items.getItems();
//getting item details
console.log("item:", items.getItemDetails("oregano pizza"));
console.log("item:", items.getItemDetails(2));

order.setOrder("oregano pizza");
order.setOrder("chicken pizza");
let res = order.setOrder("veggie pizza");
res ? order.setOrderComplete(res.id) : "";
order.getOrders();
console.log("total cash :", Order.cashRegister);

const addToArray = <T>(array: T[], item: T): T => {
  array.push(item);
  return item;
};
const userArray: User[] = [];
const ItemArray: Item[] = [];
addToArray<User>(userArray, { name: "billa", role: "contributor", id: 12 });
addToArray<Item>(ItemArray, { name: "holy water", price: 200, id: 200 });

console.log(userArray);
console.log(ItemArray);
