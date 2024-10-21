# 2024-10-21

## from observations to your first prototypes for interaction design

Sand can be used as a soft material
Elephant trunk soft robot

### Iteration

explore a lot of ideas

### Interaction

don't think about what it would look like
focus on communication
read 'concept of interaction'

- who - who interacts?
  - ex) cat
- **how** - how do these subjects interact?
- **why** - for what reasons is interaction taking place?
- where - under what conditions is interaction taking place?

### One key interaction

just think of one thing

**[teenage engineering](https://teenage.engineering/)**

- Playdate
  simple interaction but, it has lots of meanings
  katamari damacy

### Agency

Agency is the user's ability to perform meaningful actions and have a sense of control over their experience with a digital interface or system.

Soft robots could be sturbon. So, just give users a limited interaction.

[cream on chrome - ecosystem](https://cream-on-chrome.com/)
Ian Cheng Emissaries - robot

### Personality

[superflux](https://superflux.in/#)

### Feedback

- cybernetic loop

### Input & Output

input : stroke, pressure, temperature
output : ambient light, wiggle, melody

ex) collecting - Elie Hofer
input : memories
output : a story
ex) emoty - marine faroud boget
input :
output :
ex) spectral yard - faustine perillaud
input : plugging a device
output : a plant with a story to tell

### Exercise 1

spend 20m brainstorming a list of **possible areas or specific situations** where your soft robot could be used or interact within a home environment.

- A robot that warns you if you plug in too many cords
- A robot that automatically turns off the gas stove when the water boils over
- A robot that welcomes me warmly when I come home
- A robot that plays with my cat or trains him, feed him when he's hungry
- A robot that translates cat speech in real time
- A robot that changes TV channels according to the direction of your finger
- A robot that informs you of the food shortage when the refrigerator runs out of food
- A robot that selects different music according to my emotions
- A robot that adjusts the volume of sounds from neighbors or outside

### Exercise 2

building on your ideas from exercise 1, create a list of **potential interactions and feedback mechanisms** for your soft robot.

- input: plugging cords, output: warning colors
- input: turn the gas stove on / detect water boiling, output: turn it off, make a noise
- input: come closer to home, output: show welcoming expression or words of comfort
- input: my cat sound or his movements, output: give him food
- input: my cat sound or his movements, output: show his emotion colors or translate it
- input: finger movements, output: change tv channel
- input: food shortage in refrigerator, output: make a grocery shopping list
- input: listening to my emotions, output: select music and play it
- input: finger gestures, output: volume of neighbors or outside

### Exercise 3

using your ideas from exercised 1, 2, write a short paragraph in markdown that describes what your soft robot does, where it resides in the home and who it interacts with.

1. explain context
2. semantic territories

#### conversation with AI

[context file](./context.md)

<details>
<summary>AI response 1</summary>
<div markdown="1">
That sounds like a fascinating project, integrating soft robotics and cat behavior! Based on the observations you’ve made, you’re already thinking carefully about how to design a robot that can interact effectively with your cat. I can offer some suggestions and questions to help guide your project based on your goals and observations.

### 1. **Touch Interaction:**

- **Observation**: You’ve observed the parts of your cat’s body where they like to be touched.
- **Application**: Design the soft robot with sensors and a gentle, flexible surface that can mimic your touch in those specific areas. This will make the robot more appealing to your cat and help it build trust with the robot.
- **Questions**: Could your robot detect where your cat approaches or leans in, suggesting where it wants to be touched? Would there be a difference in touch behavior when your cat is calm vs. playful?

### 2. **Behavioral Modeling (Cat’s Perspective):**

- **Observation**: Understanding your cat’s perception of your behavior helps model how the robot should act. For example, cats may view certain human movements as play invitations, threats, or care behaviors.
- **Application**: Program the robot to move in ways that align with these behaviors (e.g., slow movements to appear non-threatening, quick flicks for play).
- **Questions**: How does your cat interpret your body language when you’re trying to play versus when you’re feeding him? Can the robot switch between these modes automatically?

### 3. **Interest-Based Interaction:**

- **Observation**: You’ve noted what your cat is interested in.
- **Application**: The robot can include these items or motions (feathers, light trails, small toys) in its play routines. You could design attachments or interactive elements to keep the robot adaptable to new stimuli.
- **Questions**: Would the robot be able to present a variety of stimuli to see which ones your cat prefers at different times of the day?

### 4. **Emotional Responses to Sound:**

- **Observation**: Tracking how your cat responds emotionally to sound is critical in interaction.
- **Application**: Incorporate sound sensors and speakers in the robot to detect your cat’s vocalizations and play calming or engaging sounds in response.
- **Questions**: Could the robot adjust its behavior (e.g., speaking softly or playing sounds) based on your cat’s emotional response? Would there be a way to synchronize sound and movement to engage the cat in different moods?

### 5. **Tracking Movements:**

- **Observation**: Monitoring your cat’s movements will help understand activity patterns and detect when it’s time to engage.
- **Application**: Integrate lightweight tracking (via sensors or camera vision) to monitor your cat’s movements and direct the robot toward it. The robot could follow your cat or wait in specific places to engage when the cat passes by.
- **Questions**: Could the robot predict where your cat is going and move to intercept it? Would it know when to stop following the cat to avoid being a nuisance?

### 6. **Favorite and Least Favorite Places:**

- **Observation**: Knowing where your cat prefers to spend time or avoid can improve how the robot interacts.
- **Application**: Program the robot to avoid certain areas or spend more time in places your cat feels comfortable. You could create safe zones where the robot doesn’t follow to respect your cat’s alone time.
- **Questions**: Should the robot "rest" in the cat’s favorite spot and only engage when your cat approaches it? Could the robot encourage the cat to explore places it usually avoids by placing toys or food there?

### 7. **Timing:**

- **Observation**: Understanding when your cat wants to be alone is crucial to the robot’s social interaction model.
- **Application**: Use behavioral patterns and activity monitoring to schedule the robot’s activity—playing, feeding, or being inactive at appropriate times. You could also design a mode where the robot "understands" when to leave your cat alone based on his actions or vocal cues.
- **Questions**: Could the robot learn over time when to engage and when to give your cat space, possibly using a combination of time and movement data?

---

### Integrating All the Observations:

- **Behavioral Adaptation**: Your robot could have several modes: play, feed, relax, and observe. Each mode would engage different systems, such as touch, sound, and movement tracking. The robot should switch modes based on a combination of time, cat activity, and emotional state.
- **Emotional Intelligence**: Since cats are highly responsive to subtle cues, the robot should be able to read a range of signals (vocalizations, movements) and adjust its actions, from a playful companion to a calm, soothing presence.

- **Customization**: As your cat’s preferences change, the robot could adapt by learning from interaction patterns. This continuous feedback loop would ensure that the robot stays in tune with your cat’s evolving behavior and preferences.

What do you think about these ideas? How do you envision the robot handling these interactions on a technical level?

</div>
</details>
<details>
<summary>AI response 2</summary>
<div markdown="2">
Your project is fascinating, as it merges robotics, animal behavior, and emotional interaction. You're focusing on understanding your cat’s perspective while developing a soft robot that interacts with him in meaningful ways. Let’s refine the concept by addressing key aspects of interaction, feedback loops, and how the robot's agency and personality could be designed to better align with your goals.

### **1. Core Concepts for the Robot’s Design:**

#### **Purpose**:

The robot acts as an intermediary between you and your cat. It provides engagement, nourishment, or communication by interpreting your cat’s behavior, sound, and preferences in real-time.

#### **Key Interaction (KF)**:

Let’s define this interaction as the "Key Feedback" interaction (KF). In essence, this is the most critical part of the feedback loop where the robot recognizes a signal (input) and translates it into a meaningful action (output). KF could be:

- **Cat's sound** → Robot provides food, color display, or translation.
- **Cat's movement** → Robot responds with gestures, motions, or training exercises.

### **2. Input and Output Design:**

#### **Input:**

The input can be based on two major sources:

- **Sound**: Vocalizations from your cat that the robot interprets. The cat’s meows, purrs, or other sounds serve as communication cues.
- **Movement**: The robot senses where the cat is, how it moves, and adjusts its behavior accordingly.

#### **Output**:

The robot reacts by:

- **Feeding**: If the cat signals hunger (via sound or behavior), the robot can provide food.
- **Emotion Representation**: The robot could use color to reflect your cat’s mood (e.g., blue for calm, red for agitated, green for playful).
- **Translation**: The robot can audibly or visually express what the cat’s sound might mean, allowing you to "understand" his mood.

### **3. Gestures:**

Gestures are essential in maintaining a tactile and emotional connection with your cat. Here’s how each could be implemented:

- **Embrace**: The robot may wrap around or nudge softly, simulating a gentle "hug" if your cat seeks comfort.
- **Touch**: Using soft materials and pressure-sensitive touch, the robot can stroke or pat your cat on preferred areas (as you observed earlier).
- **Tension and Move**: These gestures are useful for play. The robot might pull back or tense to mimic prey-like behavior, sparking curiosity or chase play.
- **Speak**: The robot can emit sounds similar to your voice or make calming tones based on your cat’s emotional state.

### **4. Agency**:

The robot needs **limited autonomy** to respond to your cat naturally. It could have:

- **Reactive Behavior**: Reacts immediately to inputs like sounds and movement, so the interaction feels timely and engaging.
- **Proactive Behavior**: When your cat is idle or moving toward a favorite play area, the robot can initiate play by presenting a toy or moving in a way to invite engagement.
- **Adaptive Learning**: Over time, the robot can learn your cat's patterns (when he likes to be alone, when he is hungry, etc.) and adjust its actions to better fit his routines.

### **5. Personality**:

Giving the robot a personality enhances its role in your home. Based on your cat's preferences, you could design the robot's personality to be:

- **Playful and Curious**: The robot may wiggle or chirp, trying to engage your cat in chase games or training exercises.
- **Calm and Caring**: The robot could mimic soothing behaviors like soft purring, slow movements, or even "cuddling" your cat when it's time to relax.
- **Supportive Trainer**: For training, the robot would have a more instructive personality, gently guiding your cat’s behavior with positive reinforcement (like sound cues or food rewards).

### **6. Feedback Loop**:

The feedback loop involves **constant interaction** between your cat’s behavior, the robot’s response, and the ongoing refinement of the robot’s actions.

- **Observation**: The robot continuously observes your cat's sound and movement patterns. It identifies specific actions like hunger meows or playful gestures.
- **Response**: Based on the input, the robot immediately reacts with a chosen output (feeding, play, emotion colors).
- **Adjustment**: Over time, the robot can adjust its behavior based on your cat's changing needs (maybe less play when tired, more food after activity). It becomes more accurate as it learns.

For example, the robot might initially provide food whenever your cat meows, but after a while, it learns to differentiate between a "hungry meow" and a "play meow," thus fine-tuning its responses.

### **7. Why This Matters:**

The overall goal of your project is to **understand your cat’s perspective** by giving the robot the ability to interpret and respond to your cat’s signals in real-time. By doing this, you’re creating a **harmonious interaction** where both you and your cat feel understood. This robot won’t just be a pet tool; it will function almost like a bridge between human and animal, fostering emotional connection and mutual understanding.

### **Summary of Key Elements:**

- **Core Interaction**: Cat's sound or movement → Robot’s action (feeding, emotional display, translation).
- **Gestures**: Embrace, touch, move, tension, speak to engage on a tactile and emotional level.
- **Input**: Cat's vocalization and movement are the primary input for the robot.
- **Output**: Food provision, emotional color display, or translation of cat language.
- **Personality**: A dynamic mix of playful, calming, and guiding traits that fit your cat’s preferences.
- **Agency**: Limited autonomy with reactive and proactive behavior, adapting over time.
- **Feedback Loop**: Continuous observation, response, and adaptation to your cat’s needs.

By blending **emotion, perspective, and need**, your soft robot can build a relationship with your cat that goes beyond typical pet care, creating an interactive experience that benefits both you and your feline companion.

What part of this design are you most excited about developing further? Would you like to explore how the robot might learn more complex behaviors over time?

</div>
</details>

---

### Reference

[soft robotics context](https://github.com/abstractmachine/head-md-soft-robots/blob/main/process/2024-10-21/readme.md)
