package com.sunbeam.dao;

import org.hibernate.*;

import com.sunbeam.entities.Product;
import static com.sunbeam.utils.HibernateUtils.getFactory;

import java.io.Serializable;


public class ProductDaoImpl  implements ProductDao
{

	@Override
	public String addProduct(Product product) 
	{
		String msg="product add failed!!";
		
		Session session = getFactory().getCurrentSession();
		
		Transaction tx = session.beginTransaction();
		try
		{
			Serializable productId = session.save(product);
			
			tx.commit();
			msg="Product added successfully , with Id" +productId;
		} catch(RuntimeException e)
		{
			if(tx != null)
				tx.rollback();
			throw e;
		}
		return msg;
		
	}

	@Override
	public Product getProductDetailsById(Long productId)
	{
		
		Product product=null;
		
		Session session = getFactory().getCurrentSession();
		
		Transaction tx = session.beginTransaction();
		try
		{
			product = session.get(Product.class, productId);
			
			tx.commit();
		}
		catch (RuntimeException e)
		{
			if(tx != null)
				tx.rollback();
			throw e;
		}
		return product;
				
	}

	
}
