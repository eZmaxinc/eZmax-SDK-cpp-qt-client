/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.17
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIFont_getAutocomplete_v2_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIFont_getAutocomplete_v2_Response_mPayload::OAIFont_getAutocomplete_v2_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIFont_getAutocomplete_v2_Response_mPayload::OAIFont_getAutocomplete_v2_Response_mPayload() {
    this->initializeModel();
}

OAIFont_getAutocomplete_v2_Response_mPayload::~OAIFont_getAutocomplete_v2_Response_mPayload() {}

void OAIFont_getAutocomplete_v2_Response_mPayload::initializeModel() {

    m_a_obj_font_isSet = false;
    m_a_obj_font_isValid = false;
}

void OAIFont_getAutocomplete_v2_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIFont_getAutocomplete_v2_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_obj_font_isValid = ::OpenAPI::fromJsonValue(a_obj_font, json[QString("a_objFont")]);
    m_a_obj_font_isSet = !json[QString("a_objFont")].isNull() && m_a_obj_font_isValid;
}

QString OAIFont_getAutocomplete_v2_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIFont_getAutocomplete_v2_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (a_obj_font.size() > 0) {
        obj.insert(QString("a_objFont"), ::OpenAPI::toJsonValue(a_obj_font));
    }
    return obj;
}

QList<OAIFont_AutocompleteElement_Response> OAIFont_getAutocomplete_v2_Response_mPayload::getAObjFont() const {
    return a_obj_font;
}
void OAIFont_getAutocomplete_v2_Response_mPayload::setAObjFont(const QList<OAIFont_AutocompleteElement_Response> &a_obj_font) {
    this->a_obj_font = a_obj_font;
    this->m_a_obj_font_isSet = true;
}

bool OAIFont_getAutocomplete_v2_Response_mPayload::is_a_obj_font_Set() const{
    return m_a_obj_font_isSet;
}

bool OAIFont_getAutocomplete_v2_Response_mPayload::is_a_obj_font_Valid() const{
    return m_a_obj_font_isValid;
}

bool OAIFont_getAutocomplete_v2_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (a_obj_font.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIFont_getAutocomplete_v2_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
