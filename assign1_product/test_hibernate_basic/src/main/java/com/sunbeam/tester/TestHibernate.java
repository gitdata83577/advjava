package com.sunbeam.tester;

import org.hibernate.SessionFactory;
import static com.sunbeam.utils.HibernateUtils.getFactory;

public class TestHibernate {

	public static void main(String[] args) {   //try with resource -autocloseable
		try (SessionFactory sf = getFactory()) {
			System.out.println("Hibernate up n running .....");
		} catch (Exception e) {
			e.printStackTrace();
		}

	}

}
