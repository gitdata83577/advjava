package com.sunbeam.tester;


import java.util.Scanner;

import org.hibernate.SessionFactory;

import com.sunbeam.dao.ProductDao;
import com.sunbeam.dao.ProductDaoImpl;
import com.sunbeam.entities.Category;
import com.sunbeam.entities.Product;

import static com.sunbeam.utils.HibernateUtils.getFactory;

public class AddProduct
{
	public static void main(String[] arg)
	{
		try(SessionFactory sf = getFactory();
				Scanner sc=new Scanner(System.in))
		{
			ProductDao dao = new ProductDaoImpl();
			System.out.println(" Enter product details - productName , \r\n "
					+" double price , int quantity, \r\n"
					+" Category category");
			
		Product newProduct= new Product(sc.next(), sc.nextDouble(), sc.nextInt(), Category.valueOf(sc.next().toUpperCase()));
		
		System.out.println(dao.addProduct(newProduct));
		}
		catch (Exception e)
		{
			e.printStackTrace();
		}
	}

}
