package com.sunbeam.beans;

import com.sunbeam.daos.UserDao;
import com.sunbeam.daos.UserDaoImpl;
import com.sunbeam.pojos.User;

public class LoginBean
{
	private String email;
	private String passwd;
	private User user;
	
	
	public LoginBean() 
	{
	}

	public LoginBean(String email, String password, User user) 
	{
		this.email = email;
		this.passwd = password;
		this.user = user;
	}

	public String getEmail() {
		return email;
	}

	public void setEmail(String email) {
		this.email = email;
	}

	public String getPassword() {
		return passwd;
	}

	public void setPassword(String passwd) {
		this.passwd = passwd;
	}

	public User getUser() {
		return user;
	}

	public void setUser(User user) {
		this.user = user;
	}
	
	public void authenticate()
	{
		try( UserDao userDao = new UserDaoImpl())
		{
			System.out.println(user);
			User u = userDao.findByEmail(email);
//			System.out.println(u);

			if(u != null && u.getPassword().equals(passwd))
			{
//				System.out.println(u.getEmail());
				this.user = u;
				System.out.println(user);
				
			}
			else
				this.user = null;
		}
		catch(Exception e)
		{
			e.printStackTrace();
		}
	}
	
	
	
	

}
