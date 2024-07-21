import 'package:flutter/material.dart';

void main() {
  runApp(MaterialApp(
    home: Scaffold(
      appBar: AppBar(
        title: Text('TEST_APP'),
        centerTitle: true,

      ),
      body: Center(
        child: Text('Testing text huihuihui'),
      ),
      floatingActionButton: FloatingActionButton( onPressed: null,
        child: Text('NEXT'),
      ),
    ),
  ));
}
