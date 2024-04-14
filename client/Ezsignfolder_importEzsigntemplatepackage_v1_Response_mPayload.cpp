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

#include "Ezsignfolder_importEzsigntemplatepackage_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsignfolder_importEzsigntemplatepackage_v1_Response_mPayload::Ezsignfolder_importEzsigntemplatepackage_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsignfolder_importEzsigntemplatepackage_v1_Response_mPayload::Ezsignfolder_importEzsigntemplatepackage_v1_Response_mPayload() {
    this->initializeModel();
}

Ezsignfolder_importEzsigntemplatepackage_v1_Response_mPayload::~Ezsignfolder_importEzsigntemplatepackage_v1_Response_mPayload() {}

void Ezsignfolder_importEzsigntemplatepackage_v1_Response_mPayload::initializeModel() {

    m_a_obj_ezsigndocument_isSet = false;
    m_a_obj_ezsigndocument_isValid = false;
}

void Ezsignfolder_importEzsigntemplatepackage_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsignfolder_importEzsigntemplatepackage_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_obj_ezsigndocument_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_ezsigndocument, json[QString("a_objEzsigndocument")]);
    m_a_obj_ezsigndocument_isSet = !json[QString("a_objEzsigndocument")].isNull() && m_a_obj_ezsigndocument_isValid;
}

QString Ezsignfolder_importEzsigntemplatepackage_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsignfolder_importEzsigntemplatepackage_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_a_obj_ezsigndocument.size() > 0) {
        obj.insert(QString("a_objEzsigndocument"), ::Ezmaxapi::toJsonValue(m_a_obj_ezsigndocument));
    }
    return obj;
}

QList<Ezsigndocument_ResponseCompound> Ezsignfolder_importEzsigntemplatepackage_v1_Response_mPayload::getAObjEzsigndocument() const {
    return m_a_obj_ezsigndocument;
}
void Ezsignfolder_importEzsigntemplatepackage_v1_Response_mPayload::setAObjEzsigndocument(const QList<Ezsigndocument_ResponseCompound> &a_obj_ezsigndocument) {
    m_a_obj_ezsigndocument = a_obj_ezsigndocument;
    m_a_obj_ezsigndocument_isSet = true;
}

bool Ezsignfolder_importEzsigntemplatepackage_v1_Response_mPayload::is_a_obj_ezsigndocument_Set() const{
    return m_a_obj_ezsigndocument_isSet;
}

bool Ezsignfolder_importEzsigntemplatepackage_v1_Response_mPayload::is_a_obj_ezsigndocument_Valid() const{
    return m_a_obj_ezsigndocument_isValid;
}

bool Ezsignfolder_importEzsigntemplatepackage_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_obj_ezsigndocument.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsignfolder_importEzsigntemplatepackage_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_ezsigndocument_isValid && true;
}

} // namespace Ezmaxapi
