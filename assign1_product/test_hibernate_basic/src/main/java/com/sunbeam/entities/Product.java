package com.sunbeam.entities;

import javax.persistence.*;

@Entity

@Table(name="product")

public class Product
{
	@Id
	
	@GeneratedValue(strategy = GenerationType.IDENTITY)
	Long Id;
	
	@Column(name="product_name",length=25, unique=true)
	private String productName;
	
	@Column(name="product_price",length=25)
	private double price;
	
	@Column(name="quantity")
	private int quantity;
	
	@Enumerated(EnumType.STRING)
	@Column(length=20)
	private Category category;

	public Product() {
		// TODO Auto-generated constructor stub
	}

	public Product(String productName, double price, int quantity, Category category) 
	{
		
		super();
		this.productName = productName;
		this.price = price;
		this.quantity = quantity;
		this.category = category;
	}



	@Override
	public String toString() {
		return "Product [productName=" + productName + ", price=" + price + ", quantity=" + quantity
				+ ", category=" + category + "]";
	}


	
	
	
	

	
	

}
