import data from "./data/users_data.json";

export type User = {
  name: string;
  id: number;
  role: "admin" | "contributor" | "member";
}

type UpdateUser = Partial<User>;

class Users {
  users: User[] = data as User[];

  getData(): void {
    console.log("data:");
    this.users.forEach((user) => console.log(user));
  }

  updateUser(id: number, updates: UpdateUser): User | null {
    const user = this.users.find((u) => u.id === id);
    if (!user) return null;
    return Object.assign(user, updates);
  }

  add(newUser: Omit<User, "id">): number {
    const user: User = {
      id: this.users.length + 1,
      ...newUser,
    };
    return this.users.push(user);
  }
}

const users = new Users();
users.updateUser(500, { name: "Hafeez", role: "admin" });
users.add({ name: "Hafeez", role: "admin" });
users.getData();
