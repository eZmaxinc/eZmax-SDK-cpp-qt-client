/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "Ezsigndocument_getWordsPositions_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsigndocument_getWordsPositions_v1_Request::Ezsigndocument_getWordsPositions_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsigndocument_getWordsPositions_v1_Request::Ezsigndocument_getWordsPositions_v1_Request() {
    this->initializeModel();
}

Ezsigndocument_getWordsPositions_v1_Request::~Ezsigndocument_getWordsPositions_v1_Request() {}

void Ezsigndocument_getWordsPositions_v1_Request::initializeModel() {

    m_e_get_isSet = false;
    m_e_get_isValid = false;

    m_b_word_case_sensitive_isSet = false;
    m_b_word_case_sensitive_isValid = false;

    m_a_s_word_isSet = false;
    m_a_s_word_isValid = false;
}

void Ezsigndocument_getWordsPositions_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsigndocument_getWordsPositions_v1_Request::fromJsonObject(QJsonObject json) {

    m_e_get_isValid = ::Ezmaxapi::fromJsonValue(m_e_get, json[QString("eGet")]);
    m_e_get_isSet = !json[QString("eGet")].isNull() && m_e_get_isValid;

    m_b_word_case_sensitive_isValid = ::Ezmaxapi::fromJsonValue(m_b_word_case_sensitive, json[QString("bWordCaseSensitive")]);
    m_b_word_case_sensitive_isSet = !json[QString("bWordCaseSensitive")].isNull() && m_b_word_case_sensitive_isValid;

    m_a_s_word_isValid = ::Ezmaxapi::fromJsonValue(m_a_s_word, json[QString("a_sWord")]);
    m_a_s_word_isSet = !json[QString("a_sWord")].isNull() && m_a_s_word_isValid;
}

QString Ezsigndocument_getWordsPositions_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsigndocument_getWordsPositions_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_e_get_isSet) {
        obj.insert(QString("eGet"), ::Ezmaxapi::toJsonValue(m_e_get));
    }
    if (m_b_word_case_sensitive_isSet) {
        obj.insert(QString("bWordCaseSensitive"), ::Ezmaxapi::toJsonValue(m_b_word_case_sensitive));
    }
    if (m_a_s_word.size() > 0) {
        obj.insert(QString("a_sWord"), ::Ezmaxapi::toJsonValue(m_a_s_word));
    }
    return obj;
}

QString Ezsigndocument_getWordsPositions_v1_Request::getEGet() const {
    return m_e_get;
}
void Ezsigndocument_getWordsPositions_v1_Request::setEGet(const QString &e_get) {
    m_e_get = e_get;
    m_e_get_isSet = true;
}

bool Ezsigndocument_getWordsPositions_v1_Request::is_e_get_Set() const{
    return m_e_get_isSet;
}

bool Ezsigndocument_getWordsPositions_v1_Request::is_e_get_Valid() const{
    return m_e_get_isValid;
}

bool Ezsigndocument_getWordsPositions_v1_Request::isBWordCaseSensitive() const {
    return m_b_word_case_sensitive;
}
void Ezsigndocument_getWordsPositions_v1_Request::setBWordCaseSensitive(const bool &b_word_case_sensitive) {
    m_b_word_case_sensitive = b_word_case_sensitive;
    m_b_word_case_sensitive_isSet = true;
}

bool Ezsigndocument_getWordsPositions_v1_Request::is_b_word_case_sensitive_Set() const{
    return m_b_word_case_sensitive_isSet;
}

bool Ezsigndocument_getWordsPositions_v1_Request::is_b_word_case_sensitive_Valid() const{
    return m_b_word_case_sensitive_isValid;
}

QList<QString> Ezsigndocument_getWordsPositions_v1_Request::getASWord() const {
    return m_a_s_word;
}
void Ezsigndocument_getWordsPositions_v1_Request::setASWord(const QList<QString> &a_s_word) {
    m_a_s_word = a_s_word;
    m_a_s_word_isSet = true;
}

bool Ezsigndocument_getWordsPositions_v1_Request::is_a_s_word_Set() const{
    return m_a_s_word_isSet;
}

bool Ezsigndocument_getWordsPositions_v1_Request::is_a_s_word_Valid() const{
    return m_a_s_word_isValid;
}

bool Ezsigndocument_getWordsPositions_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_e_get_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_word_case_sensitive_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_a_s_word.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsigndocument_getWordsPositions_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_e_get_isValid && m_b_word_case_sensitive_isValid && true;
}

} // namespace Ezmaxapi
