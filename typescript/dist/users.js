"use strict";
var __assign = (this && this.__assign) || function () {
    __assign = Object.assign || function(t) {
        for (var s, i = 1, n = arguments.length; i < n; i++) {
            s = arguments[i];
            for (var p in s) if (Object.prototype.hasOwnProperty.call(s, p))
                t[p] = s[p];
        }
        return t;
    };
    return __assign.apply(this, arguments);
};
Object.defineProperty(exports, "__esModule", { value: true });
var users_data_json_1 = require("./data/users_data.json");
var Users = /** @class */ (function () {
    function Users() {
        this.users = users_data_json_1.default;
    }
    Users.prototype.getData = function () {
        console.log("data:");
        this.users.forEach(function (user) { return console.log(user); });
    };
    Users.prototype.updateUser = function (id, updates) {
        var user = this.users.find(function (u) { return u.id === id; });
        if (!user)
            return null;
        return Object.assign(user, updates);
    };
    Users.prototype.add = function (newUser) {
        var user = __assign({ id: this.users.length + 1 }, newUser);
        return this.users.push(user);
    };
    return Users;
}());
var users = new Users();
users.updateUser(500, { name: "Hafeez", role: "admin" });
users.add({ name: "Hafeez", role: "admin" });
users.getData();
