using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AudioManager : MonoBehaviour
{
    public static AudioManager instance;

    [Serializable]
    public class Sound
    {
        public string name;
        public AudioClip clip;

        [Range(0f, 1f)]
        public float volume;

        [Range(.1f, 3f)]
        public float pitch;

        [HideInInspector]
        public AudioSource sources;

        public bool loop;
        public bool playOnAwake;
    }

    public Sound[] sounds;

    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
            DontDestroyOnLoad(gameObject);
        }
        else
        {
            Destroy(gameObject);
        }

        foreach (Sound s in sounds)
        {
            s.sources = gameObject.AddComponent<AudioSource>();
            s.sources.clip = s.clip;

            s.sources.volume = s.volume;
            s.sources.pitch = s.pitch;
            s.sources.loop = s.loop;
            s.sources.playOnAwake = s.playOnAwake;
        }

    }


    public void Play(string name)
    {
        Sound s = Array.Find(sounds, sound => sound.name == name);
        if (s == null)
            return;
        s.sources.Play();
    }

    public void Mute(string name)
    {
        Sound s = Array.Find(sounds, sound => sound.name == name);
        if (s == null)
            return;
        s.sources.mute = true;
    }

    public void UnMute(string name)
    {
        Sound s = Array.Find(sounds, sound => sound.name == name);
        if (s == null)
            return;
        s.sources.mute = false;
    }

    public void SetVolume(string name, float volume)
    {
        Sound s = Array.Find(sounds, sound => sound.name == name);
        if (s == null)
            return;
        s.sources.volume = volume;
    }
    public void SetVolume(string[] name, float volume)
    {

        for (int x = 0; x < name.Length; x++)
        {

            Sound s = Array.Find(sounds, sound => sound.name == name[x]);
            if (s == null)
                return;
            s.sources.volume = volume;
        }

        
    }

    public void StopPlaying(string name)
    {
        Sound s = Array.Find(sounds, sound => sound.name == name);
        if (s == null)
            return;
        s.sources.Stop();
    }

    public void MuteSounds(string[] names)
    {
        for (int x = 0; x < names.Length; x++)
        {
            Sound s = Array.Find(sounds, sound => sound.name == names[x]);
            if (s == null)
                return;
            s.sources.mute = true;
        }
    }

    public void UnMuteSounds(string[] names)
    {
        for (int x = 0; x < names.Length; x++)
        {
            Sound s = Array.Find(sounds, sound => sound.name == names[x]);
            if (s == null)
                return;
            s.sources.mute = false;
        }
    }

    public void LoopAudio()
    {
        InvokeRepeating("DuckLoop", 5f, 6f);
    }

    public void EndLoopAudio()
    {
        CancelInvoke("DuckLoop");
    }

    void DuckLoop()
    {
        Play("Ducks");
    }
}
