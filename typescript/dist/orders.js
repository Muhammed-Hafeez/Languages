"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
exports.Order = void 0;
var Order = /** @class */ (function () {
    function Order(menu) {
        this.orderQueue = [];
        this.menu = [];
        this.menu = menu;
    }
    Order.prototype.setOrder = function (name) {
        var nextOrderId = "id:".concat(Math.floor(Math.random() * 1000), ".").concat(Order.id++);
        var pizza = this.menu.filter(function (elem) { return elem.name === name; });
        if (!pizza[0])
            return null;
        var orderObject = {
            item: pizza[0],
            status: "notfound",
            id: nextOrderId,
        };
        Order.cashRegister += pizza[0].price;
        orderObject.status = "ordered";
        this.orderQueue.push(orderObject);
        return orderObject;
    };
    Order.prototype.getOrders = function () {
        console.log("Orderes:");
        for (var i = 0; i < this.orderQueue.length; i++) {
            var element = this.orderQueue[i];
            console.log(element);
        }
    };
    Order.prototype.setOrderComplete = function (id) {
        if (this.orderQueue.length < 1) {
            console.log("no orders are placed in order queue");
            return null;
        }
        var order = this.orderQueue.filter(function (order) { return order.id === id; })[0];
        if (!order) {
            console.log("sorry could not find the order");
            return null;
        }
        order.status = "completed";
        return order;
    };
    Order.cashRegister = 0;
    Order.id = 0;
    return Order;
}());
exports.Order = Order;
