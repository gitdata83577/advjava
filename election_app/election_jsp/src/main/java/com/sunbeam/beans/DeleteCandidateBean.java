package com.sunbeam.beans;

import com.sunbeam.daos.CandidateDao;
import com.sunbeam.daos.CandidateDaoImpl;
import com.sunbeam.pojos.Candidate;

public class DeleteCandidateBean 
{
	private int count;
	private int id;
	Candidate candidate;
	
	public DeleteCandidateBean() {
		super();
	}
	
	public DeleteCandidateBean(int count, int id, Candidate candidate) {
		super();
		this.count = count;
		this.id = id;
		this.candidate = candidate;
	}


	public int getCount() {
		return count;
	}
	public void setCount(int count) {
		this.count = count;
	}
	public int getId() {
		return id;
	}
	public void setId(int id) {
		this.id = id;
	}
	public Candidate getCandidate() {
		return candidate;
	}
	public void setCandidate(Candidate candidate) {
		this.candidate = candidate;
	}
	
	public void deleteCandidate() 
	{
		try(CandidateDao candDao = new CandidateDaoImpl())
		{
			count = candDao.deleteById(id);
		} 
		
		catch (Exception e) 
		{
			e.printStackTrace();
		}
	}
	
}
