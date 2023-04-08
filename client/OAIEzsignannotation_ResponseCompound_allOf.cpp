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

#include "OAIEzsignannotation_ResponseCompound_allOf.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignannotation_ResponseCompound_allOf::OAIEzsignannotation_ResponseCompound_allOf(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignannotation_ResponseCompound_allOf::OAIEzsignannotation_ResponseCompound_allOf() {
    this->initializeModel();
}

OAIEzsignannotation_ResponseCompound_allOf::~OAIEzsignannotation_ResponseCompound_allOf() {}

void OAIEzsignannotation_ResponseCompound_allOf::initializeModel() {

    m_obj_textstylestatic_isSet = false;
    m_obj_textstylestatic_isValid = false;
}

void OAIEzsignannotation_ResponseCompound_allOf::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignannotation_ResponseCompound_allOf::fromJsonObject(QJsonObject json) {

    m_obj_textstylestatic_isValid = ::OpenAPI::fromJsonValue(obj_textstylestatic, json[QString("objTextstylestatic")]);
    m_obj_textstylestatic_isSet = !json[QString("objTextstylestatic")].isNull() && m_obj_textstylestatic_isValid;
}

QString OAIEzsignannotation_ResponseCompound_allOf::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignannotation_ResponseCompound_allOf::asJsonObject() const {
    QJsonObject obj;
    if (obj_textstylestatic.isSet()) {
        obj.insert(QString("objTextstylestatic"), ::OpenAPI::toJsonValue(obj_textstylestatic));
    }
    return obj;
}

OAITextstylestatic_ResponseCompound OAIEzsignannotation_ResponseCompound_allOf::getObjTextstylestatic() const {
    return obj_textstylestatic;
}
void OAIEzsignannotation_ResponseCompound_allOf::setObjTextstylestatic(const OAITextstylestatic_ResponseCompound &obj_textstylestatic) {
    this->obj_textstylestatic = obj_textstylestatic;
    this->m_obj_textstylestatic_isSet = true;
}

bool OAIEzsignannotation_ResponseCompound_allOf::is_obj_textstylestatic_Set() const{
    return m_obj_textstylestatic_isSet;
}

bool OAIEzsignannotation_ResponseCompound_allOf::is_obj_textstylestatic_Valid() const{
    return m_obj_textstylestatic_isValid;
}

bool OAIEzsignannotation_ResponseCompound_allOf::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (obj_textstylestatic.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignannotation_ResponseCompound_allOf::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
