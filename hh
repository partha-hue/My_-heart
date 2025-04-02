* General reset and layout */
* {
  margin: 0;
  padding: 0;
  box-sizing: border-box;
}

body {
  font-family: Arial, sans-serif;
  background-color: #f4f4f4;
  color: #333;

}

header {
  background-color: #333;
  color: #fff;
  padding: 10px 20px;
  display: flex;
  justify-content: space-between;
  align-items: center;
}

header .logo h1 {
  margin: 0;
}

nav ul {
  list-style-type: none;
}

nav ul li {
  display: inline-block;
  margin: 0 15px;
}
nav ul li a {
  color: #fff;
  text-decoration: none;
  font-size: 16px;
  padding: 5px 10px;
  transition: background-color 0.3s;
}

nav ul li a:hover {
  background-color: #575757;
}

main {
  padding: 20px;
}

.intro h2 {
  font-size: 32px;
  margin-bottom: 10px;
}

.intro p {
  font-size: 18px;
  line-height: 1.6;
}

.features {
  margin-top: 40px;
}

.features h2 {
  font-size: 28px;
  margin-bottom: 20px;
}

.feature-box {
  background-color: #fff;
  border-radius: 8px;
  box-shadow: 0 2px 5px rgba(0, 0, 0, 0.1);
  padding: 20px;
  margin: 20px 0;
}

.feature-box h3 {
  font-size: 24px;
  margin-bottom: 10px;
}

footer {
  background-color: #333color: #fff;
  text-align: center;
  padding: 10px 0;
  position: fixed;
  width: 100%;
  bottom: 0;
}