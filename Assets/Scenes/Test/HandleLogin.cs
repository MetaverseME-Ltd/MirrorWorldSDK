using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using MirrorworldSDK.Models;
using MirrorWorld;
public class HandleLogin : MonoBehaviour
{
    private UserResponse m_UserResponse;
    void Start()
    {
        MWSDK.SetSchemeName("mwsdkunity");
    }

    void Update()
    {
        
    }

    public void Login()
    {
        MirrorSDK.StartLogin(LoginHandler);
    }

    private void LoginHandler(LoginResponse _LoginResponse)
    {
        m_UserResponse = _LoginResponse.user;
        Debug.Log($"[HANDLELOGIN] Login CallBack");
    }

    public void GetWallet()
    {
        Debug.Log($"[HANDLELOGIN] SOL ADDRESS : {m_UserResponse.sol_address}");
    }
}