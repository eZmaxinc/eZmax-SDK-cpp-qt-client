/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.16
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAICustom_WordPositionWord_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICustom_WordPositionWord_Response::OAICustom_WordPositionWord_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICustom_WordPositionWord_Response::OAICustom_WordPositionWord_Response() {
    this->initializeModel();
}

OAICustom_WordPositionWord_Response::~OAICustom_WordPositionWord_Response() {}

void OAICustom_WordPositionWord_Response::initializeModel() {

    m_s_word_isSet = false;
    m_s_word_isValid = false;

    m_a_obj_word_position_occurence_isSet = false;
    m_a_obj_word_position_occurence_isValid = false;
}

void OAICustom_WordPositionWord_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICustom_WordPositionWord_Response::fromJsonObject(QJsonObject json) {

    m_s_word_isValid = ::OpenAPI::fromJsonValue(s_word, json[QString("sWord")]);
    m_s_word_isSet = !json[QString("sWord")].isNull() && m_s_word_isValid;

    m_a_obj_word_position_occurence_isValid = ::OpenAPI::fromJsonValue(a_obj_word_position_occurence, json[QString("a_objWordPositionOccurence")]);
    m_a_obj_word_position_occurence_isSet = !json[QString("a_objWordPositionOccurence")].isNull() && m_a_obj_word_position_occurence_isValid;
}

QString OAICustom_WordPositionWord_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICustom_WordPositionWord_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_s_word_isSet) {
        obj.insert(QString("sWord"), ::OpenAPI::toJsonValue(s_word));
    }
    if (a_obj_word_position_occurence.size() > 0) {
        obj.insert(QString("a_objWordPositionOccurence"), ::OpenAPI::toJsonValue(a_obj_word_position_occurence));
    }
    return obj;
}

QString OAICustom_WordPositionWord_Response::getSWord() const {
    return s_word;
}
void OAICustom_WordPositionWord_Response::setSWord(const QString &s_word) {
    this->s_word = s_word;
    this->m_s_word_isSet = true;
}

bool OAICustom_WordPositionWord_Response::is_s_word_Set() const{
    return m_s_word_isSet;
}

bool OAICustom_WordPositionWord_Response::is_s_word_Valid() const{
    return m_s_word_isValid;
}

QList<OAICustom_WordPositionOccurence_Response> OAICustom_WordPositionWord_Response::getAObjWordPositionOccurence() const {
    return a_obj_word_position_occurence;
}
void OAICustom_WordPositionWord_Response::setAObjWordPositionOccurence(const QList<OAICustom_WordPositionOccurence_Response> &a_obj_word_position_occurence) {
    this->a_obj_word_position_occurence = a_obj_word_position_occurence;
    this->m_a_obj_word_position_occurence_isSet = true;
}

bool OAICustom_WordPositionWord_Response::is_a_obj_word_position_occurence_Set() const{
    return m_a_obj_word_position_occurence_isSet;
}

bool OAICustom_WordPositionWord_Response::is_a_obj_word_position_occurence_Valid() const{
    return m_a_obj_word_position_occurence_isValid;
}

bool OAICustom_WordPositionWord_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_s_word_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (a_obj_word_position_occurence.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICustom_WordPositionWord_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_s_word_isValid && m_a_obj_word_position_occurence_isValid && true;
}

} // namespace OpenAPI
