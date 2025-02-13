import os
from autogen import ConversableAgent
from dotenv import load_dotenv, find_dotenv

from openai import OpenAI

# Sucht die .env-Datei in übergeordneten Verzeichnissen
dotenv_path = find_dotenv()
load_dotenv(dotenv_path)

# Jetzt können Sie die Umgebungsvariablen abrufen
api_key = os.getenv("OPENAI_API_KEY")

if api_key is None:
    raise ValueError("API-Schlüssel nicht gefunden. Stellen Sie sicher, dass die .env-Datei korrekt ist.")


model = "gpt-4o-mini"
llm_config = {
    "model": model,
    "api_key": os.getenv("API_KEY"),
}

agent = ConversableAgent(
    name="chatbot",
    llm_config=llm_config,
    code_execution_config=False,
    human_input_mode="Never"
)

response = agent

