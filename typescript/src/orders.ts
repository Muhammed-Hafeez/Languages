type Item = {
  name: string;
  id: number;
  price: number;
};
type OrderSchema = {
  item: Item;
  status: "notfound" | "ordered" | "completed";
  id: string;
};

export class Order {
  static cashRegister:number = 0;
  static id: number = 0;
  orderQueue: OrderSchema[] = [];
  menu: Item[] = [];
  constructor(menu: Item[]) {
    this.menu = menu;
  }
  setOrder(name: string): OrderSchema | null {
    let nextOrderId = `id:${Math.floor(Math.random() * 1000)}.${Order.id++}`;
    const pizza = this.menu.filter((elem) => elem.name === name);
    if (!pizza[0]) return null;
    let orderObject: OrderSchema = {
      item: pizza[0],
      status: "notfound",
      id: nextOrderId,
    };
   Order.cashRegister += pizza[0].price;
    orderObject.status = "ordered";
    this.orderQueue.push(orderObject);
    return orderObject;
  }
  getOrders(): void {
    console.log("Orderes:");
    for (let i = 0; i < this.orderQueue.length; i++) {
      const element = this.orderQueue[i];
      console.log(element);
    }
  }
  setOrderComplete(id: string):null | OrderSchema {
    if (this.orderQueue.length < 1) {
      console.log("no orders are placed in order queue");
      return null;
    }
    const order = this.orderQueue.filter((order) => order.id === id)[0];
    if (!order) {
      console.log("sorry could not find the order");
      return null;
    }
    order.status = "completed";
    return order;
  }
}
