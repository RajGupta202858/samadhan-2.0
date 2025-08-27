from flask import Flask, jsonify

app = Flask(__name__)

# Sample student data
students = [
    {"id": 1, "name": "Raju Kumar", "course": "CSE", "semester": 1},
    {"id": 2, "name": "Pushpendra", "course": "CSE", "semester": 1},
    {"id": 3, "name": "Omkar", "course": "CSE", "semester": 1},
    {"id": 4, "name": "Raushan", "course": "CSE", "semester": 1},
    {"id": 5, "name": "Randhir", "course": "CSE", "semester": 1}
]

@app.route('/students', methods=['GET'])
def get_students():
    return jsonify({"students": students})

if __name__ == '__main__':
    app.run(debug=True)
