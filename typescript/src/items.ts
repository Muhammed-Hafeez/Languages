export type Item = {
  name: string;
  id: number;
  price: number;
};
export class Items {
  static id: number;
  list: Item[];
  constructor() {
    Items.id = 0;
    this.list = [];
  }

  setItem(name: string, price: number): number {
    return this.list.push({ id: Items.id++, name, price });
  }

  getItems(): void {
    console.log("Menu:");
    if (this.list.length < 1) console.log("no items found the list is empty");
    for (let i = 0; i < this.list.length; i++) {
      const element: Item = this.list[i];
      console.log(element);
    }
  }
  getItemDetails(identifier: string | number): Item | null {
    let item: Item | undefined;
    if (typeof identifier === "number") {
      item = this.list.filter((elem) => elem.id === identifier)[0];
    } else {
      item = this.list.filter((elem) => elem.name === identifier)[0];
    }
    if (!item) return null;
    return item;
  }
}
