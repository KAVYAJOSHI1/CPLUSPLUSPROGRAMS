#include "crow_all.h"  // Include the single-header Crow library
#include <string>

int main() {
    crow::SimpleApp app;

    // Define a route for the calculator
    CROW_ROUTE(app, "/calculate")
    .methods("POST"_method)
    ([](const crow::request& req) {
        auto params = crow::json::load(req.body);
        if (!params)
            return crow::response(400, "Invalid input");

        std::string op = params["operation"].s();
        double num1 = std::stod(params["num1"].s());
        double num2 = std::stod(params["num2"].s());
        double result;

        if (op == "+") result = num1 + num2;
        else if (op == "-") result = num1 - num2;
        else if (op == "*") result = num1 * num2;
        else if (op == "/") {
            if (num2 == 0) return crow::response(400, "Division by zero");
            result = num1 / num2;
        }
        else return crow::response(400, "Unknown operation");

        crow::json::wvalue response;
        response["result"] = result;
        return crow::response(response);
    });

    // Start the server on port 18080
    app.port(18080).multithreaded().run();
}
