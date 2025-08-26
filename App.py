from flask import Flask, request, jsonify

app = Flask(__name__)

@app.route('/hello', methods=['GET'])
def hello_world():
    # Get user input from query parameter (?name=Raj)
    name = request.args.get("name", None)

    if name:
        return jsonify({"message": f"Hello {name}!"})
    else:
        return jsonify({"message": "Hello World!"})

if __name__ == '__main__':
    app.run(debug=True)
