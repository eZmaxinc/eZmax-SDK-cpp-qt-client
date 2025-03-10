/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.2
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "Ezsignfolder_reorder_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsignfolder_reorder_v1_Request::Ezsignfolder_reorder_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsignfolder_reorder_v1_Request::Ezsignfolder_reorder_v1_Request() {
    this->initializeModel();
}

Ezsignfolder_reorder_v1_Request::~Ezsignfolder_reorder_v1_Request() {}

void Ezsignfolder_reorder_v1_Request::initializeModel() {

    m_a_pki_ezsigndocument_id_isSet = false;
    m_a_pki_ezsigndocument_id_isValid = false;
}

void Ezsignfolder_reorder_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsignfolder_reorder_v1_Request::fromJsonObject(QJsonObject json) {

    m_a_pki_ezsigndocument_id_isValid = ::Ezmaxapi::fromJsonValue(m_a_pki_ezsigndocument_id, json[QString("a_pkiEzsigndocumentID")]);
    m_a_pki_ezsigndocument_id_isSet = !json[QString("a_pkiEzsigndocumentID")].isNull() && m_a_pki_ezsigndocument_id_isValid;
}

QString Ezsignfolder_reorder_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsignfolder_reorder_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_a_pki_ezsigndocument_id.size() > 0) {
        obj.insert(QString("a_pkiEzsigndocumentID"), ::Ezmaxapi::toJsonValue(m_a_pki_ezsigndocument_id));
    }
    return obj;
}

QList<qint32> Ezsignfolder_reorder_v1_Request::getAPkiEzsigndocumentId() const {
    return m_a_pki_ezsigndocument_id;
}
void Ezsignfolder_reorder_v1_Request::setAPkiEzsigndocumentId(const QList<qint32> &a_pki_ezsigndocument_id) {
    m_a_pki_ezsigndocument_id = a_pki_ezsigndocument_id;
    m_a_pki_ezsigndocument_id_isSet = true;
}

bool Ezsignfolder_reorder_v1_Request::is_a_pki_ezsigndocument_id_Set() const{
    return m_a_pki_ezsigndocument_id_isSet;
}

bool Ezsignfolder_reorder_v1_Request::is_a_pki_ezsigndocument_id_Valid() const{
    return m_a_pki_ezsigndocument_id_isValid;
}

bool Ezsignfolder_reorder_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_pki_ezsigndocument_id.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsignfolder_reorder_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_pki_ezsigndocument_id_isValid && true;
}

} // namespace Ezmaxapi
